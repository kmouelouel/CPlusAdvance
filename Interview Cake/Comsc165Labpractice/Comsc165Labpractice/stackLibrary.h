////specification file for the stack class 
//
//#include <iostream>
//#ifndef STACHLIBRARY_H
//
//#define  STACHLIBRARY_H
// 
//class stack{
//private:
//	 struct node
//    {
//        char data;
//        node* next;    
//    };
//    
//   node *top ;
//public:
//	void printStack(){
//	node *ptr=top;
//	 while(ptr)
//       { std::cout<<ptr->data<<std::endl;
//        ptr=ptr->next;
//       }
//	
//	}
//	void puch(char inchar){
//	struct node* newnode=new node;
//	newnode->data=inchar;
//	newnode->next=nullptr;
//	if(top==nullptr)
//		top=newnode;
//	else 
//	{
//		newnode->next=top;
//		top=newnode;
//
//	}}
//	void pop(char &outchar){
//		if(IsEmpty())
//			std::cout <<"the stack is empty.";
//		else {outchar=top->data;
//		top=top->next;
//		}}
//	bool IsEmpty(){
//	return top==nullptr;
//	}
//	  
//
//};
//#endif