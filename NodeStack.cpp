#include <iostream>
#include "headers/NodeStack.h"

Node * NodeStack::pop() {
	if(head == NULL)
		return NULL;
	else {
		Node * temp = head;
		head = head->getNext();
		return temp;
	}
}

void NodeStack::push(Node * n) {
	if(head)
		n->setNext(head);

	head = n;
}

bool NodeStack::checkEmpty() {
	if(head)
		return true;
	else
		return false;
}