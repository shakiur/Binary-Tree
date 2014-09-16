#include "headers/Node.h"

Node::Node(int value) : 
	value(value) {}

Node::Node(Node * left, Node * right, int value) : 
	left(left), right(right), value(value) {}

Node * Node::getLeft() { return left; }

Node * Node::getRight() {return right; }

int Node::getValue() {return value;}
