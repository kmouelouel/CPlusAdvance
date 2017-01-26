#include <iostream>
using namespace std;
void f(int);
void func(void);
int main(){
	int a=1;
	// call by reference 
	f(a);
	printf("a id %d\n",a);
	func();

	system("pause");
}//end main
void func(){
	
	printf("this is a func call");}
void func(int a){
	++a;}
