#include <iostream>
#include <typeinfo>
#include <cstddef>

using namespace std;
const long int count=100;
// declaration of stucture
struct S{
	 int a;
	 int b; 
	 int c;
};
//for typeid
struct A{};
struct B{};
int main() {
	// the (.) periode and (->) are oprtators to access to struct 
struct S  s = {1,2,3};
struct S *sp=&s;
	printf("s has members a:%d, b:%d, c:%d\n",s.a,s.b,s.c);
	//access the memory throw the pontor
	printf("s has members a:%d, b:%d, c:%d\n",sp->a,sp->b,sp->c);
	// Ternary conditional operator c==
	int i=5,j=47;
	printf("is the conditional true?%s\n", i>j ? "yes": "no" );
	//size of operator is used to determine size of the object 
	printf("size is %d\n",(int) sizeof(int) );// nbre of bit for integer is 4
	printf("size of struct is   %d\n",(int) sizeof(s) );//  struct has 3 integer so the size is 3*4=12
	// type id exists only CPP
	// add <typeinfo>
	struct A a1;
	struct A a2;
	struct B b1;
	struct B b2;
	if(typeid(a1)== typeid(b2)){
	cout<<"same"<< endl;
	}
	else {cout<<"different"<<endl;
	}
	cout<< typeid(a1).name()<<endl;
	//new and delete operators
	printf("allocate space for %lu ints at *ip with new\n",count);
	int *ip=new int[count];
	if(ip==NULL){
	cout<<"new failed."<<endl;
	}
	for(int k=0; k<count; k++){
	ip[k]=k;
	}
	for(int n=0;n<count; n++)
	{printf(" %d:%d ",n,ip[n]);
	if(n>0 && n%25==0 || i== count-1) cout<<endl;
	}
	delete [] ip;
	cout<<"\nspace at *ip deleted\n"<<endl;
	cout<<" work with bits"<<endl;
	int bit1=1;
	int bit2=0;
	if (bit1 && bit2){
	cout<<"true"<<endl;
	}
	else {cout<<"false"<<endl;}
	
	
	
	system("pause");
}//end main