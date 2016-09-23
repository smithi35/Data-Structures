#include "Queue.h"
#include "Node.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "Starting test" << endl;
	
	Queue *queue = new Queue();
	int number = 50;
	
	int i;
	for (i = 0; i < number; i++)
	{
		cout << "Inserting" << i << endl;
		queue->insert(i);
	}
	
	for (i = 0; i < number; i++)
	{
		cout << "Removing top: ";
		int item = queue->removeTop();
		cout << item << endl;
	}
	
	cout << "All done." << endl;
	return 0;
}
