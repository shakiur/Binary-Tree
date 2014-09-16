class Node {

	public:
		// Constructors to intialize data
		Node(int);
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