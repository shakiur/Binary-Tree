class Node {

	public:
		// Constructor to intialize data
		Node(Node *, Node *, int);

		// Getters to retrieve data
		Node * getLeft();
		Node * getRight();
		int getValue();

	private:
		Node * left;
		Node * right;
		int value;
};