#ifndef _NODE_H_
#define _NODE_H_

typedef struct node {
	int data;
	struct node* prev;
	struct node* next;
} node_t;

node_t* create_node(int data);

#endif
