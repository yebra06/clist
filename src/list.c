#include <stdlib.h>
#include <stdio.h>

#include "list.h"
#include "node.h"

/**
 * Append item to end of list.
 */
void push_back(node_t** head, int data) {
	node_t* new_node = create_node(data);

	if (*head == NULL) {
		*head = new_node;
		return;
	}

	node_t* new_tail = *head;
	while (new_tail->next != NULL)
		new_tail = new_tail->next;
	new_tail->next = new_node;
	new_node->prev = new_tail;
}

/**
 * Insert item to front of list.
 */
void push_front(node_t** head, int data) {
	node_t* new_node = create_node(data);
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
}

/**
 * Free memory allocated for list.
 */
void del_list(node_t* head) {
	node_t* tmp;
	while (head != NULL) {
		tmp = head;
		head = head->next;
		free(tmp);
		tmp = NULL;
	}
	head = NULL;
}

/**
 * Display list.
 */
void display(node_t* head) {
	node_t* last;
	while (head != NULL) {
		printf("%d ", head->data);
		last = head;
		head = head->next;
	}
	puts(" ");
}
