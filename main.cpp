#include <iostream>
#include "headers/Node.h"

using namespace std;

int main() {
	Node * head = new Node(5);
	cout << "Head Data: " << head->getLeft() << endl;

}