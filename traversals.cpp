#include <iostream>
#include "headers/Node.h"

Node* buildTree();

// Depth First Search
void preOrder(Node*);
void inOrder(Node*);
void postOrder(Node*);

// Breadth First Search
void bfs(Node*);
void bfsLevel(Node*, int);

int getHeight(Node*);

int main(){
	Node* root = buildTree();

	std::cout << "Pre Order: ";
	preOrder(root);
	std::cout << std::endl;

	std::cout << "In Order: ";
	inOrder(root);
	std::cout << std::endl;

	std::cout << "Post Order: ";
	postOrder(root);
	std::cout << std::endl;

	std::cout << "Height of tree: " << getHeight(root) << std::endl;

	std::cout << "Breadth First Search: ";
	bfs(root);
	std::cout << std::endl;

}

Node* buildTree(){
	Node* root = new Node(4);
	root->push(2);
	root->push(5);
	root->push(1);
	root->push(3);

	return root;
}

void preOrder(Node* root){
	if(root){
		std::cout << root->getValue() << " ";
		preOrder(root->getLeft());
		preOrder(root->getRight());
	}
}

void inOrder(Node* root){
	if(root){
		inOrder(root->getLeft());
		std::cout << root->getValue() << " ";
		inOrder(root->getRight());
	}
}

void postOrder(Node* root){
	if(root){
		postOrder(root->getLeft());
		postOrder(root->getRight());
		std::cout << root->getValue() << " ";
	}
}

void bfs(Node* root){
	int tree_height = getHeight(root);

	for(int i = 1; i <= tree_height; i++){
		bfsLevel(root, i);
	}
}

void bfsLevel(Node* root, int level){
	if(root){
		if(level == 1){
			std::cout << root->getValue() << " ";
		}
		else{
			bfsLevel(root->getLeft(), level-1);
			bfsLevel(root->getRight(), level-1);
		}
	}
}

int getHeight(Node* root){
	if(root){
		int l_height = getHeight(root->getLeft());
		int r_height = getHeight(root->getRight());

		if(l_height > r_height)
			return 1 + l_height;
		else
			return 1 + r_height;
	}
	else{
		return 0;
	}
}