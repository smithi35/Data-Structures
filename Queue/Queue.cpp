#include Node.h
#include Queue.h

Node::Node(int data) {
	this.data = data;
	next = null;
}

int Node::get_data() { return data; }

Node *Node::get_next() { return next; }

void Node::set_next(Node *node) { next = node; }

Node::~Node() {
	next = null;
}

Queue::Queue() {
	length = 0;
	first = last = null;
}

void Queue::insert(int number) {
	Node *newNode = new Node(number);
	newNode.set_next(first);
}