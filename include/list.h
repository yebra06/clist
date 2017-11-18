#ifndef _LIST_H_
#define _LIST_H_

#include "node.h"

extern node_t* head;

void push_back(node_t** head, int data);
void push_front(node_t**, int data);
void del_list(node_t* head);
void display(node_t* head);

#endif
