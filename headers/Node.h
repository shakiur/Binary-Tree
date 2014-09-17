class Node {

	public:
		// Constructor to intialize data
		Node(Node *, Node *, int);

		// Getters to retrieve data
		Node * getLeft();
		Node * getRight();
		Node * getNext();
		int getValue();

		// Set next value for stack implementation
		void setNext(Node *);

	private:
		Node * left;
		Node * right;
		int value;

		// Only to be used for stack implementations
		Node * next;
};