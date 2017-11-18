#include <stdlib.h>
#include <stdio.h>

#include "node.h"
#include "utils.h"

/**
 * Generate random int in range [lo, hi].
 *
 * Notes:
 * 	- Range is inclusive.
 *
 * @param lo: Lower bound of random integer.
 * @param hi: Upper bound of random integer.
 * @return
 */
int bounded_rand(int lo, int hi) {
	int limit, val;
	limit = RAND_MAX - (RAND_MAX % hi);
	while ((val = rand()) >= limit);
	return val % hi;
}

/**
 * Generate list of random values between [lo, hi].
 * See bounded_rand(int, int)
 */
void generate_rand(int *arr, int len, int lo, int hi) {
	while (len--)
		arr[len] = bounded_rand(lo, hi);
}

/**
 * Display array.
 *
 * Notes:
 * 	- It is up to user to cast list to correct node type.
 */
void display_array(void* arr, int len) {
	int i;
	int* list = (int*)arr;
	for (i = 0; i < len; i++)
		printf("%d ", list[i]);
	puts(" ");
}

/**
 * Display linked list.
 *
 * Notes:
 * 	- It is up to user to cast list to correct node type.
 */
void display_llist(void* llist) {
	node_t* list = (node_t*)llist, tmp;

	while (list != NULL) {
		printf("%d ", list->data);
		tmp = *list;
		list = list->next;
	}

	puts(" ");
}