//#ifndef NUMBERLIST_H
//#define NUMBERLIST_H
//class NumberList
//{
//private :
//	//declare a structure for the list
//	struct ListNode{
//	double value;
//	struct ListNode *next;
//	};
//
//	ListNode *head;
// 
//
//public:
//	// constructor
//	NumberList(){head=nullptr;}
//	// destruction 
//	~NumberList();
//// Linked list operations
// void appendNode(double);
// void insertNode(double);
//void deleteNode(double);
//void displayList() const;
// };
// #endif
// void NumberList::appendNode(double num){
//	ListNode *newNode; // To point to a new node
//    ListNode *nodePtr; // To move through the list
// 
//  // Allocate a new node and store num there.
//  newNode = new ListNode;
//  newNode->value = num;
//  newNode->next = nullptr;
// 
// // If there are no nodes in the list
//  // make newNode the first node.
//  if (!head)
// head = newNode;
// else // Otherwise, insert newNode at end.
// {
//// Initialize nodePtr to head of list.
//nodePtr = head;
//
//// Find the last node in the list.
//while (nodePtr->next)
// nodePtr = nodePtr->next;
//
// // Insert newNode as the last node.
// nodePtr->next = newNode;
// }
// }
//
//
// void NumberList::displayList()  const
// {
// ListNode *nodePtr; // To move through the list
// 
//  // Position nodePtr at the head of the list.
//  nodePtr = head;
// 
//  // While nodePtr points to a node, traverse
//  // the list.
//  while (nodePtr)
//  {
//  // Display the value in this node.
//  std::cout << nodePtr->value << std::endl;
// 
//  // Move to the next node.
//  nodePtr = nodePtr->next;
//  }
//}