#include <iostream>
#include <string>
using namespace std;


int main(){
    string cocatString="";
	string TheWord="";
	cout<<"\nplease,type a word,or (-1) to end the program\n";
	getline(cin,TheWord);
	 int len=0; 
	 
 while(TheWord!="-1"){
		// re is set to the end of tje reverse sequence of theword
	len=TheWord.length(); 
	 if(TheWord[len-1]=='r')
	 { cout<<TheWord<<",it is ending with r\n";
	  cocatString+=TheWord+" (r) \n";
	 }
	else  { 
		if(TheWord[len-1]=='y'&&TheWord[len-2]=='a') 
	     { cout<<TheWord<<",it is ending with ay\n";
		  cocatString+=TheWord+" (ay) \n";
		}else 
	  cout<< TheWord<<" is not ending  with (ay or r)\n";
	 
	 }
	 
		cout<<"Please,type a word,or -1 to end the program\n";
	getline(cin,TheWord);
	 }//end while  
 cout<<"Summary of words ending with r/ay"<<cocatString;
 system("pause");
}// end main 