//#include "IntBinaryTree.h"
//#include <iostream>
//using namespace std;
//
//void IntBinaryTree::insertNode(int num){
//	TreeNode *newNode = nullptr; // Pointer to a new node.
//	// Create a new node and store num in it.
//	newNode = new TreeNode;
//    newNode->value = num;
//    newNode->left = newNode->right = nullptr;
//
//   // Insert the node.
//    insert(root, newNode);
// 
//}
//void IntBinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode){
//
//if (nodePtr == nullptr)
// nodePtr = newNode; // Insert the node.
//  else if (newNode->value < nodePtr->value)
//  insert(nodePtr->left, newNode); // Search the left branch.
// else
//  insert(nodePtr->right, newNode); // Search the right branch.
// 
//  }
////*************************************************************
// // The displayInOrder member function displays the values *
//  // in the subtree pointed to by nodePtr, via inorder traversal. *
//  //*************************************************************
// 
//  void IntBinaryTree::displayInOrder(TreeNode *nodePtr) const
//  {
//  if (nodePtr)
//  {
// displayInOrder(nodePtr->left);
//  cout << nodePtr->value << endl;
//  displayInOrder(nodePtr->right);
// }
//  }
//  //*************************************************************
//  // The displayPreOrder member function displays the values *
//  // in the subtree pointed to by nodePtr, via preorder traversal. *
//  //*************************************************************
// 
//  void IntBinaryTree::displayPreOrder(TreeNode *nodePtr) 
// {
//  if (nodePtr)
//  {
//  cout << nodePtr->value << endl;
//  displayPreOrder(nodePtr->left);
//  displayPreOrder(nodePtr->right);
//  }
// }
// 
// //*************************************************************
// // The displayPostOrder member function displays the values *
//  // in the subtree pointed to by nodePtr, via postorder traversal. *
//  //*************************************************************
// 
//  void IntBinaryTree::displayPostOrder(TreeNode *nodePtr) 
//  {
//  if (nodePtr)
//  {
// displayPostOrder(nodePtr->left);
//  displayPostOrder(nodePtr->right);
// cout << nodePtr->value << endl;
//  }
//  }
//  bool IntBinaryTree::searchNode(int num)
// {
//  TreeNode *nodePtr = root;
// 
//  while (nodePtr)
//  {
//  if (nodePtr->value == num)
//  return true;
//  else if (num < nodePtr->value)
//  nodePtr = nodePtr->left;
//  else
//  nodePtr = nodePtr->right;
// }
// return false;
// }
//  void IntBinaryTree::remove(int num)
//  {
//  deleteNode(num, root);
//  }
//
//
//  void IntBinaryTree::deleteNode(int num, TreeNode *&nodePtr)
// {
//  if (num < nodePtr->value)
//  deleteNode(num, nodePtr->left);
//  else if (num > nodePtr->value)
//  deleteNode(num, nodePtr->right);
//  else
//  makeDeletion(nodePtr);
//  }