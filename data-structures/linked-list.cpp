/* 
* Linked list implementation in C++
*/

#include <iostream>

// Struct to store data
struct Node {
	Node *next;
	int data;
};

void insertNode (Node*, int&);

void printList();

void deleteNode (int&);


int main () {
	
	Node* head = new Node;

	for (int iter = 0; iter < 10; ++iter) {
		insertNode(head, iter);
	}

	return 0;
}

void insertNode (Node* head, int& value) {

}