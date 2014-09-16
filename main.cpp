#include <iostream>
#include "headers/Node.h"

using namespace std;

// Find if a node exists in Binary Tree
Node * findNode(Node *, int);

// Build Binary Tree
Node * buildBinaryTree();

int main() {
	Node * bt_head = buildBinaryTree();
}

Node * buildBinaryTree() {
	Node * h = new Node(NULL, NULL, 110);
	Node * f = new Node(h, NULL, 125);
	Node * g = new Node(NULL, NULL, 175);
	Node * c = new Node(f, g, 150);
	Node * d = new Node(NULL, NULL, 25);
	Node * e = new Node(NULL, NULL, 75);
	Node * b = new Node(d, e, 50);
	Node * a = new Node(b, c, 100);

	return a;
}

Node * findNode(Node * root, int value) {

	while(root) {
		int cur_value = root->getValue();

		if(cur_value == value)
			return root;
		else if(cur_value < value)
			root = root->getLeft();
		else
			root = root->getRight();

	}

	return NULL;
}