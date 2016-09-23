#ifndef NODE_H
#define NODE_H

class Node {
	private: 
		int data;
		Node *next;
	public:
		Node(int data);
		int get_data();
		Node *get_next();
		void set_next(Node *node);
		~Node();
};

#endif
