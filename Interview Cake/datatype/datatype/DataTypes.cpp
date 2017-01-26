#include <iostream>
#include <string>
using namespace std;
// data member are public
struct employee{
		int id;
		const char * name;
		const char * role;
}emp_t;



struct preference {
	bool likesMusic : 1;
	bool hasHair:1;
	bool hasInternet : 1;
	bool hasDinosaur : 1;
	unsigned int numberOfChildren :4;
}homer;
void IntPreference(){
	homer.likesMusic=true;
	homer.hasHair=false;
	homer.hasInternet=true;
	homer.hasDinosaur=false;
	homer.numberOfChildren=3;
	if (homer.likesMusic) printf("homer likes music\n");
	if(homer.hasHair) printf("homer has hair\n");
	if(homer.hasInternet) printf("homer has net\n");
	if(homer.hasDinosaur) printf("homer has a dinosaur\n");
	printf("homer has %d children\n",homer.numberOfChildren);
}
int main(){
  // integer types
char c;
short int si;
int i; 
long int li;
long long int lli;
cout<<"size of char c is "<<sizeof(c)<<endl;
cout<<"size of short int  is "<<sizeof(si)<<endl;
cout<<"size of int is "<<sizeof(i)<<endl;
cout<<"size of long int is "<<sizeof(li)<<endl;
cout<<"size of long long int is "<<sizeof(lli)<<endl;
li=12345;
printf("li is %d\n",li);
printf("c=127\n");
c=127;
printf("c is %d\n",c);
c++;
	printf("after increment,c is %d\n",c);

 	// float types
	// in accunting:to get good precesion, use integer types.
float f;
double d;
long double ldf;
cout<<"size of float is "<<sizeof(lli)<<endl;
cout<<"size of double is "<<sizeof(lli)<<endl;
cout<<"size of long double is "<<sizeof(lli)<<endl;
f=0.1;
f+=0.1+0.1;
cout<<"f is "<<f<<endl;
if(f==0.03) cout<<"yes"<<endl;
else cout<<"no"<<endl;
// c string 
char cstring[]="Kahina";
cout<<"length of array "<<sizeof(cstring)<<endl;
cout<<cstring<<endl;
for (unsigned int i=0; cstring[i];i++) {
printf("%02d: %c\n",i,cstring[i]);}
// C ++ string Class; object are powerful
string  cppstring="this is a C++ string";
cout<<cppstring<<endl;
for(unsigned int i=0;i<cppstring.size();i++){
printf("%02d:%c\n",i,cppstring[i]);
}
// special caracters and using of back slash(\)
char string[]="this\'s astring ";
cout<<string<<endl;
// qualifiers: static storage 
	//type qualifiers const,volatile,mutable
	// storage class: static,register,extern
for(int k=0;k<5;++k){
static int j=12;
	j+=k;
 printf("k is %d,j is %d\n",k,j);
}
 // Cpp reference is it good and usueful, ref
/*
int& f(int & ii){
	return ++ii;}
int myi=5;
int &ir=myi;
ir=10;
printf("i is %d\n",myi);
*/
// cpp struct 

struct employee jeo={42,"joe","boss"};
// using pointeur
struct employee *ep=&jeo;
printf(" %s is the %s and has id %d\n",ep->name,ep->role,ep->id);
IntPreference();
 
system("pause");
}// end main 