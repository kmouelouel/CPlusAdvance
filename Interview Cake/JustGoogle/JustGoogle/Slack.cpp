//#include <iostream>
//using namespace std;
//const int  Size =5;
//struct Stack{
//int *stackArray;
//int stackSize;
//int Top;
//};
//
//// functions prototype
//void IntStack(Stack *);
//void push(int,Stack *);
//void pop(int&,Stack *);
//bool IsFull(Stack *);
//bool IsEmpty(Stack *);
//void PrintOutStack(Stack *);
//
//int main (){
//	struct Stack *myStack=new Stack;
//	IntStack(myStack);
//	// Push the values 5, 10, 15, 20, and 25 onto the stack.
//  cout << "Pushing 5\n";
//  push(5,myStack);
//  cout << "Pushing 10\n";
// push(10,myStack);
//  cout << "Pushing 15\n";
//  push(15,myStack);
// cout << "Pushing 20\n";
//  push(20,myStack);
// cout << "Pushing 25\n";
// push(25,myStack);
// cout<<"print out the data insered."<<endl;
// PrintOutStack(myStack);
// int catchVar; // To hold values popped off the stack
// cout<<"Now,It is time to pop out the data"<<endl;
// // Pop the values off the stack.
//  cout << "Popping...\n";
//  pop(catchVar,myStack);
//  cout << catchVar << endl;
//   pop(catchVar,myStack);
//  cout << catchVar << endl;
//  pop(catchVar,myStack);
// cout << catchVar << endl;
//  pop(catchVar,myStack);
//  cout << catchVar << endl;
//  pop(catchVar,myStack);
// cout << catchVar << endl;
//
//	 system("pause");
//
//
//}// end main 
//// functions prototype
//
//void PrintOutStack(Stack * my_Stack){
//	for(int i=0;i<=my_Stack->Top; i++){
//		cout<<my_Stack->stackArray[i]<<endl;	
//	}
//}//end function
//
//
//void IntStack(struct Stack *my_Stack){ 
//	my_Stack->stackArray=new int[Size];
//	my_Stack->stackSize=Size;
//	my_Stack->Top=-1;
//
//
//}// end Function
//void push(int num,struct Stack *my_Stack){
//	if (IsFull(my_Stack))
//		cout<<"the Stack is Full. "<<endl;
//	else {
//		my_Stack->Top++;
//		my_Stack->stackArray[my_Stack->Top]=num;
//		
//
//	}
//
//}// end Function
//void pop(int &num,struct Stack *my_Stack){
//	if (IsEmpty(my_Stack))
//		cout<<"the Stack is empty. "<<endl;
//	else {
//		num=my_Stack->stackArray[my_Stack->Top];
//		my_Stack->Top--;
//
//	}
//
//}// end Function
//bool IsFull(struct Stack *my_Stack){
//	if(my_Stack->Top==my_Stack->stackSize)
//		return true;
//	else
//		return false;
//
//}// end Function
//bool IsEmpty(struct Stack *my_Stack){
//	if(my_Stack->Top==-1)
//		return true;
//	else
//		return false;
//
//}// end Function