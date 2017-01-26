//// This program builds a binary tree with 5 nodes.
//  #include <iostream>
// 
//  using namespace std;
// class IntBinaryTree{
// struct TreeNode
//  {
//  int value; // The value in the node
//  TreeNode *left; // Pointer to left child node
// TreeNode *right; // Pointer to right child node
// };
// 
// // TreeNode *root; // Pointer to the root node
// public :
//	  TreeNode *root; // Pointer to the root node
//	 void insert(TreeNode *&, TreeNode *&);
//  void destroySubTree(TreeNode *);
//  void deleteNode(int, TreeNode *&); 
//  void makeDeletion(TreeNode *&);
//  void displayInOrder(TreeNode *) ;
//  void displayPreOrder(TreeNode *) ;
//  void displayPostOrder(TreeNode *) ;
//  // Binary tree operations
//  void insertNode(int);
//  bool searchNode(int);
//  void remove(int);
// }
// ;
// void IntBinaryTree::insertNode(int num){
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
// {nodePtr = newNode; // Insert the node.
//}else if ((newNode->value )< (nodePtr->value))
//  {insert(nodePtr->left, newNode); // Search the left branch.
//} else
//  insert(nodePtr->right, newNode); // Search the right branch.
// 
//  }
////*************************************************************
// // The displayInOrder member function displays the values *
//  // in the subtree pointed to by nodePtr, via inorder traversal. *
//  //*************************************************************
// 
// void IntBinaryTree::displayInOrder(TreeNode *nodePtr) 
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
//  
//  
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
//  
//  void IntBinaryTree::makeDeletion(TreeNode *&nodePtr)
// {
//// Define a temporary pointer to use in reattaching
//	 // the left subtree.
//TreeNode *tempNodePtr = nullptr;
//
// if (nodePtr == nullptr)
// cout << "Cannot delete empty node.\n";
// else if (nodePtr->right == nullptr)
// {
// tempNodePtr = nodePtr;
// nodePtr = nodePtr->left; // Reattach the left child.
// delete tempNodePtr;
// }
//  else if (nodePtr->left == nullptr)
//  {
// tempNodePtr = nodePtr;
//  nodePtr = nodePtr->right; // Reattach the right child.
//  delete tempNodePtr;
//  }
//  // If the node has two children.
// else
//  {
// // Move one node to the right.
//  tempNodePtr = nodePtr->right;
//  // Go to the end left node.
// while (tempNodePtr->left)
// tempNodePtr = tempNodePtr->left;
// // Reattach the left subtree.
//  tempNodePtr->left = nodePtr->left;
//  tempNodePtr = nodePtr;
//  // Reattach the right subtree.
//  nodePtr = nodePtr->right;
//  delete tempNodePtr;
//  }
//  }
//
//
//
//
//  int main()
// {
//  IntBinaryTree tree;
// 
//  cout << "Inserting nodes. ";
//  tree.insertNode(5);
//  tree.insertNode(8);
//  tree.insertNode(3);
//  tree.insertNode(12);
//  tree.insertNode(9);
//  cout << "Done.\n";
// // Display inorder.
//  cout << "Inorder traversal:\n";
// tree.displayInOrder(tree.root);
//
//  // Display preorder.
//  cout << "\nPreorder traversal:\n";
//  tree.displayPreOrder(tree.root);
// 
//  // Display postorder.
//  cout << "\nPostorder traversal:\n";
//  tree.displayPostOrder(tree.root);
//
//  // Search for the value 3.
//  if (tree.searchNode(3))
//  cout << "3 is found in the tree.\n";
//  else
//  cout << "3 was not found in the tree.\n";
// 
//  // Search for the value 100.
//  if (tree.searchNode(100))
// cout << "100 is found in the tree.\n";
// else
//  cout << "100 was not found in the tree.\n";
// return 0;
// }