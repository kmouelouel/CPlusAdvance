//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//
//An object sepcification Use in a linked list
//struct Student{
//string name;
//int id;
//float gpa;
//Student* next;// the next link
//};//Student
// Student *head=nullptr;
//  function declarations:
// void insertNode(string,int,float);
//void appendNode();
//void arrangeNode();
//void display();
//void deleteNode(int);
//int main(){
//	 create an empty linked list;
//	
//   appendNode();
//  appendNode( );
//   appendNode();
//   arrangeNode();
//   display();
//	insertNode("dida",7,4.5);  
//	
//	cout<<" read from beginning to end."<<endl;
//	display();
//	 cout<<"Now delete the last node insered"<<endl;;
//	 deleteNode(7);
//	 display();
//	system("pause");
//	
//
//}//end main
//
//void deleteNode(int theid){
//	Student *nodeptr;
//	Student *previousNode;
//	  
//	if(head->id==theid){
//	nodeptr=head->next;
//	delete head;
//	head=nodeptr;
//	}
//	else {
//	nodeptr=head;
//	while(nodeptr!= nullptr && nodeptr->id!=theid)
//	{
//	previousNode=nodeptr;
//	nodeptr=nodeptr->next;
//	
//	}//end while
//	if(nodeptr){
//	previousNode->next=nodeptr->next;
//	delete nodeptr;}
//	}
//
//
//}//end deletenode
//void display(){
//Student *nodeptr;
//nodeptr=head;
//while(nodeptr){
//
//cout<<"Name = "<<left<<setw(30)<<nodeptr->name;
//		cout.fill(0);
//		cout<<" ID= " <<right<<setw(7)<<nodeptr->id
//			<<", pga ="<<nodeptr->gpa<<endl;
//		nodeptr=nodeptr->next;
//
//
//}//end while
//
//}
//void insertNode(string thename,int theid, float thepga){
//	Student * newstudent;
//	Student *nodeptr;
//	Student * previousNode=nullptr;
//	 Allocate a new node store the data
//	newstudent=new Student;
//	newstudent->name=thename;
//	newstudent->id=theid;
//	newstudent->gpa=thepga;
//	 if there are no node in the list 
//	make newNode the first node
//	if(!head){
//	head=newstudent;
//	newstudent->next=nullptr;
//	}else// otherwise,insert newNode
//	{nodeptr=head;
//	previousNode=nullptr;
//	while(nodeptr!=nullptr && nodeptr->id<theid){
//		previousNode=nodeptr;
//		nodeptr=nodeptr->next;
//	}//end while
//	if (previousNode==nullptr){
//	head=newstudent;
//	newstudent->next=nodeptr;
//	
//	}//end if
//	else{
//		previousNode->next=newstudent;
//		newstudent->next=nodeptr;
//	}
//	}
//
//}//end insertNode
//void appendNode(){
//	step1: creat a node 
//		Student *newstudent;
//		Student *nodeptr;
//		string thename;int theid;float thegpa;
//		newstudent=new Student;
//		step2: prompt the user data
//		cout<<"Entre your name ";
//		cin>>thename;
//		 newstudent->name=thename;
//		 cout<<"Entre your ID ";
//		cin>>theid;
//		 newstudent->id=theid;
//		  cout<<"Entre your gpa ";
//		cin>>thegpa;
//		 newstudent->gpa=thegpa;
//		 newstudent->next=nullptr;
//		if (!head){ 
//	head=newstudent;
//		}
//		else {
//		nodeptr=head;
//		while(nodeptr->next)
//			nodeptr=nodeptr->next;
//		 nodeptr->next=newstudent; 
//		}
//}
//void arrangeNode( ){
//Student *ptr1=nullptr;
//Student *ptr2=nullptr;
//Student *buffer=new Student;
//for(ptr1=head; ptr1;ptr1=ptr1->next){
//for(ptr2=ptr1->next; ptr2;ptr2=ptr2->next){
//	if(ptr1->id >= ptr2->id)
// { buffer->id=ptr1->id;
//	buffer->name=ptr1->name;
//	buffer->gpa=ptr1->gpa;
//   ptr1->id=ptr2->id;
//   ptr1->name=ptr2->name;
//   ptr1->gpa=ptr2->gpa;
//   ptr2->id=buffer->id;
//   ptr2->name=buffer->name;
//   ptr2->gpa=buffer->gpa;
// }
//
//}
//}
//
//}//end arrangeNode