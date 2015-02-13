#include <iostream>
#include "headers/Node.h"

Node::Node(int value) : 
	left(NULL), right(NULL), value(value) {}

Node * Node::getLeft() { return left; }

Node * Node::getRight() {return right; }

Node * Node::getNext() {return next; }

int Node::getValue() {return value;}

void Node::setNext(Node * n) { next = n; }

void Node::setLeft(Node * n) { left = n; }

void Node::setRight(Node * n) { right = n; }

void Node::push(int newVal) {

	Node * new_entry = new Node(newVal);
	Node* temp = this;

	while(temp){
		if(newVal < temp->getValue()){
			if(temp->getLeft())
				temp = temp->getLeft();
			else
				temp->setLeft(new_entry);
		}
		else if(newVal > temp->getValue()){
			if(temp->getRight())
				temp = temp->getRight();
			else
				temp->setRight(new_entry);
		}
		else{
			// newVal == temp->getValue()
			return;
		}
	}


}

