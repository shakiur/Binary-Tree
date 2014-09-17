#include <iostream>
#include "headers/NodeStack.h"

using namespace std;

// Find if a node exists in Binary Tree
Node * findNode(Node *, int);

// Build Binary Tree
Node * buildBinaryTree();

// Preorder Traversal of Binary Tree
void preorderTraverse(Node *);

// Inorder Traversal of Binary Tree
void inorderTraverse(Node *);

// Postorder Traversal of Binary Tree
void postorderTraverse(Node *);

// Preorder Traversal of Binary Tree w/o recursion
void preorderTraverseWithStack(Node *);

int main() {
	Node * bt_head = buildBinaryTree();
	cout << "============= Preorder Traverse ============="
		 << endl;
	preorderTraverse(bt_head);

	cout << "============= Stack PO Traverse ============="
		 << endl;
	preorderTraverseWithStack(bt_head);
}

Node * buildBinaryTree() {

	Node * root = new Node(NULL, NULL, 100);

	root->push(50);
	root->push(150);
	root->push(25);
	root->push(75);
	root->push(125);
	root->push(175);
	root->push(110);

	return root;
}

void preorderTraverse(Node * head) {

	cout << head->getValue() << endl;

	if(head->getLeft())
		preorderTraverse(head->getLeft());

	if(head->getRight())
		preorderTraverse(head->getRight());
	
}

void preorderTraverseWithStack(Node * root) {
	NodeStack * bt_stack = new NodeStack;
	bt_stack->push(root);

	while(bt_stack->checkEmpty()) {

		Node * temp = bt_stack->pop();
		cout << temp->getValue() << endl;

		if(temp->getRight())
			bt_stack->push(temp->getRight());
		
		if(temp->getLeft())
			bt_stack->push(temp->getLeft());
	}

}

void inorderTraverse(Node * head) {

	if(head->getLeft())
		preorderTraverse(head->getLeft());

	cout << head->getValue() << endl;

	if(head->getRight())
		preorderTraverse(head->getRight());
	
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