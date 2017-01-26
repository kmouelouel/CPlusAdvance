#include <iostream>
#include <string>
using namespace std;
//recursive function 
unsigned long int factorial( unsigned long int n){
if (n<2) return 1;
unsigned long int result=n;
while(n>1) result*=--n;
return result;
}
class A{
int a;
public: 
	A(int a):a(a){};
	int value() { return a;}

};
int operator + (A& lhs, A & rhs){
cout<<"operator+ for class A"<<endl;
return lhs.value()+rhs.value();}
void Fbyvalue(int b ){++b;}
 void fbyrefrence (int * ip){
++(*ip);
}
 // function is method in case of 
 //void is declaration and pass parametre  
 void func();
 void funcreference(string &);


int main (){
unsigned long int n=10;
cout<< "factorial of"<< n << " is "<< factorial(n)<<endl;
A a1(5);
A b1(42);
cout<<"add en up: "<<a1+b1<<endl;
int a=7,b=1;
string s="you are good because you are trying your best";
funcreference(s);
fbyrefrence(&a);
Fbyvalue(b);
printf("the value of (a) using reference %d\n",a); 
printf("the value of (b) using pss by value  %d\n",b);


func();
system("pause");
}//end main
void func(){

printf("this is  FUNC unction \n");}
void funcreference( string &s){
cout<<" in func refernce string has "<<s<<endl;}