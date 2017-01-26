//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
//// function prototyps
//string ResortString(string,int );
//
//
//
//int main(){
//	string word1,word2;
//	cout<<"please entre the first word :";
//	getline(cin,word1);
//	cout<<"please entre the second word :";
//	getline(cin,word2);
//	int len1=word1.length();
//	int len2=word2.length();
//	// organise the word by order alphabitic
//	
// string aword1=ResortString(word1,len1);
// string  aword2=ResortString(word2,len2);
//
//
//	cout<<" order the word 1 gives :"<<aword1<<endl;
//	cout<<" order the word 2 gives :"<<aword2<<endl;
//	bool same=true;
//	 if (len1==len2)
//	{  for (int i = 0; i < len1;  i++)
//      { if (aword1[i] != aword2[i])
//         same=false;
// 
//	 }
//	}
//	if (same==true)
//	cout<<"this two words :"<<word1<<" and "<<word2<<" are anagrams."<<endl;
//	else 
//	cout<<"this two words :"<<word1<<" and "<<word2<<" are not anagrams."<<endl;
//	system("pause");
//}//end main
//string ResortString(string aword, int size){
//	char c; 
//for (int x=0; x<size; x++)  
//{   for (int y=0; y<size-1; y++)  { 
//
//   if(aword[y]>aword[y+1]) 
//  { 
//  c=aword[y]; 
//  aword[y]=aword[y+1]; 
//  aword[y+1]=c; 
//                          } 
//                 } 
//         }
//
//return aword;
//}