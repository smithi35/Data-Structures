#ifndef QUEUE_H
#define QUEUE_H

class Node;

class Queue {
	private:
		int length;
		Node *first;
		Node *last;
	public:
		Queue();
		void insert(int number);
		int removeTop();
		int search(int index);
		bool isEmpty();
		~Queue();
};

#endif
