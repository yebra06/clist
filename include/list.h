#ifndef _LIST_H_
#define _LIST_H_

#include "node.h"

extern node_t* head;

void append(node_t* head, int data);
void display(node_t* head);

#endif
