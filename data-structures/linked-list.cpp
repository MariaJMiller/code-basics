/* 
* Linked list implementation in C++
*/

#include <iostream>

// Struct to store data
struct Node {
	Node *next;
	int data;
};

void insertNode (int& value) {}

void deleteNode (int& value) {}


int main () {
	
	Node* head = new Node;

	for (int iter = 0; iter < 10; ++iter) {
		insertNode(iter);
	}

}
