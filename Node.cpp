#include <iostream>
#include "headers/Node.h"

Node::Node(Node * left, Node * right, int value) : 
	left(left), right(right), value(value) {}

Node * Node::getLeft() { return left; }

Node * Node::getRight() {return right; }

Node * Node::getNext() {return next; }

int Node::getValue() {return value;}

void Node::setNext(Node * n) { next = n; }

void Node::setLeft(Node * n) { left = n; }

void Node::setRight(Node * n) { right = n; }

void Node::push(int newVal) {

	Node * new_entry = new Node(NULL, NULL, newVal);

	if(newVal < value) {
		if(left)
			left->push(newVal);
		else 
			left = new_entry;
	}

	else if(newVal > value) {
		if(right)
			right->push(newVal);
		else
			right = new_entry;
	}

	else
		return;

}

