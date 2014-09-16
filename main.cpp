#include <iostream>
#include "headers/Node.h"

using namespace std;

// Find if a node exists in Binary Tree
Node * findNode(Node *, int);

int main() {
	Node * head = new Node(5);
	cout << "Head Data: " << head->getLeft() << endl;

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