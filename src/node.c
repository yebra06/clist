#include <stdlib.h>

#include "node.h"

node_t* create_node(int data) {
	node_t* new_node = (node_t*)malloc(sizeof(node_t));
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return new_node;
}
