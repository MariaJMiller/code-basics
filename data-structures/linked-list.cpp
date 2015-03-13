/* 
* Linked list implementation in C++
*/

#include <iostream>

class LinkedList {

  // Struct to store data
  struct Node {
	 Node *next;
	 int data;

   Node() { next = NULL; data = 0; }
  };

  Node* head;

  public:
  // Constructor
  LinkedList () { head->next = NULL; }

  void insertNode (int);
  void printList();
  void deleteNode (int);

};

void LinkedList::insertNode(int value) {

  Node *newNode;
  Node *nodePtr;
  newNode = new Node;
  newNode->data = value;

  // Empty list condition
  if(!head)
    head = newNode;

  // Else append node
  else {

    nodePtr = head;
    // Iterate through list
    while(nodePtr->next)
      nodePtr = nodePtr->next;
    // Append node
    nodePtr->next = newNode;

  }
}

void LinkedList::printList() {

  Node *nodePtr;
  nodePtr = head;

  while(nodePtr->next) {
    nodePtr = nodePtr->next;
    std::cout << nodePtr->data << " "; 
  }
  std::cout << std::endl;

}

int main () {

  LinkedList List;

  List.insertNode(5);
  List.insertNode(10); 
  List.insertNode(15);

  List.printList();
	
	return 0;
}
