//#include <iostream>
//#include "intStack.h"
//
//using namespace std;
//intStack::intStack(int size)
//{
//stackArray= new int[size];
//stackSize=size;
//top=-1;
//}
////creat the stack array
//intStack::intStack(const intStack &obj){
//
//	if(obj.stackSize>0)
//	stackArray=new int[obj.stackSize];
//else 
//	stackArray=nullptr;
//
//stackSize=obj.stackSize;
//for(int count=0; count<stackSize; count++)
//	stackArray[count] = obj.stackArray[count];
//top=obj.top;
//}
////   destructor
//intStack::~intStack(){
//delete [] stackArray; 
//}
//// memeber function puch es the argument onto
//void intStack::push(int num){
//if (isFull())
//	cout<<"the stack is full. \n";
//else 
//{top++;
//stackArray[top]=num;
//}
//
//}
////Member function pop
//void intStack::pop(int &num){
//	if(isEmpty())
//		cout<<"the stack is empty.\n";
//	else
//	{ num=stackArray[top];
//	top--;
//
//	}
//}
////organize the stack smallest to biggest
//void intStack::theMinis(){
// int var;
// int var1,var2;
// int i=0,j;
//	 if (!isEmpty()){
//         while (i<=top-1){
//			 var1=stackArray[i];
//			 j=i+1;
//			 while (j<=top){
//			 var2=stackArray[j];
//	      if (var1<=var2)
//	        {
//	         var=stackArray[i];
//	     stackArray[i]=stackArray[j];
//	       stackArray[j]=var;
//	      } 
//		  j++;
//	   }
//			 i++;
//   }
//	 }else 
//		 cout<<"stack is empty "<<endl;
//}
//
////member function isfull
//bool intStack::isFull() const {
// 
//	if( top==stackSize-1)
//		return true;
//	else
//		return false;
// 
//
//
//}
//
//// memeber function isEmpty
//bool intStack::isEmpty() const {
//	if(top==-1)
//		return true;
//	else 
//		return false;
//
//}