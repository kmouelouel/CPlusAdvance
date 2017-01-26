// /*20.10 (Printing a Sentence in Reverse Order with a Stack)
// Write a program that inputs a line of text and uses 
// a stack object to print the line reversed. 
// (IMPORTANT NOTE:  As stated in class, the reverse should be printed from the character level...
// */
//#include<string>
//#include<iostream>
//#include "stackLibrary.h"
//using namespace std;
//
//stack _stackClass;
//
//// function prototype
//string inputData();
//void outputData(string);
//void InsertInStack(string);
//string PrintoutFromStack();
//int main()
//
//{   stack mystack;
//	 // propmt the data from the use 
//    string myphrase=inputData();
//	// insert data in the dynamic stack using linklist.
//     InsertInStack(myphrase);
//		 //print out the data from stack, the data will be in inverse way that has been insered
//string inversephrase=PrintoutFromStack();
//cout <<"the sentence in inverse order using a stack is:\n\n"<<inversephrase<<endl;
//cout<<endl;
//system("pause");
//
//}
//
//// function 
//string inputData(){
//string data;
// cout<<"Please, Enter a your sentence :";
// getline( cin ,data);
//  cout<<endl;
//  return data;
//}
// 
//void InsertInStack(string str){
//	
//	for (int i =0; i <str.length(); i++) {
//        _stackClass.puch(str[i]);
//    }
//}
//string  PrintoutFromStack(){
// string newphrace;
//    char c;
//	
//    while (!_stackClass.IsEmpty()) {
//        
//        _stackClass.pop(c);
//        newphrace+=c;
//       }
//	return newphrace;
//}