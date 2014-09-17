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