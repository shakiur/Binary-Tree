class Node {

	public:
		// Constructor to intialize data
		Node(int);

		// Getters to retrieve data
		Node * getLeft();
		Node * getRight();
		Node * getNext();
		int getValue();

		void push(int);

		// Setters to store new data
		void setNext(Node *);
		void setLeft(Node *);
		void setRight(Node *);

	private:
		Node * left;
		Node * right;
		int value;

		// Only to be used for stack implementations
		Node * next;
};