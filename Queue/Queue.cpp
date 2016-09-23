#include "Node.h"
#include "Queue.h"
#include <cstddef>
#include <iostream>

using namespace std;

Node::Node(int sent)
{
	data = sent;
	next = NULL;
}

int Node::get_data() { return data; }

Node *Node::get_next() { return next; }

void Node::set_next(Node *node) { next = node; }

Node::~Node()
{
	next = NULL;
}

Queue::Queue()
{
	first = last = NULL;
	length = 0;
}

void Queue::insert(int number)
{
	Node *newNode = new Node(number);
	if (isEmpty()) {
		cout << "Empty" << endl;
		first = last = newNode;
	} else {
		last->set_next(newNode);
		last = newNode;
	}
	length++;
}

int Queue::removeTop()
{
	int removed = -1;
	if (!isEmpty()) {
		Node *remove = first;
		first = first->get_next();
		removed = remove->get_data();
		delete remove;
		length--;
	}
	return removed;
}

int Queue::search(int index)
{
	int currIndex = 0;
	int value = -1;
	Node *curr = first;
	
	if (index < length)
	{
		while (currIndex < index)
		{
			curr = curr->get_next();
			index++;
		}
		value = curr->get_data();
	}
	
	return value;
}

bool Queue::isEmpty()
{
	bool empty = false;
	if (first == NULL && last == NULL) 
		empty = true;
	
	return empty;
}

Queue::~Queue()
{
	length = 0;
	delete(first);
	delete(last);
}
