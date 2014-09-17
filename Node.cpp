#include "headers/Node.h"

Node::Node(Node * left, Node * right, int value) : 
	left(left), right(right), value(value) {}

Node * Node::getLeft() { return left; }

Node * Node::getRight() {return right; }

Node * Node::getNext() {return next; }

int Node::getValue() {return value;}

void Node::setNext(Node * n) { next = n; }