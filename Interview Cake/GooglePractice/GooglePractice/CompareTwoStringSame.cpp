//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// function prototyp 
//bool compareWords(string,string);
//int main(){
//string word1="",word2="";
//cout<<"please entre the first word :";
//getline(cin,word1);
//cout<<"please entre the secind word :";
//getline(cin,word2);
//cout<<"the length of  two words are: "<<word1<< " and "<<word2<<endl;
//bool mybool=compareWords(word1,word2);
//  if (mybool)
//	  cout<< "the two words are same"<<endl;
//  else 
//	  cout<<"this two words are differents."<<endl;
//	system("pause");
//}//end main 
//bool compareWords(string myword1, string myword2){
////compare between this two word are tham same 
//int len1=myword1.length();
//int len2=myword2.length();
//bool same=true;
//if(len1==len2){
//	if(len1<2 ){
//				 if (myword1[len1-1]==myword2[len2-1]&& len1==len2)
//					 { cout<<"the two words are the same"<<endl;
//				  return true;
//					  }
//				   else {
//					 cout<<"the two words are the differents "<<endl;
//				  return false ;
//				   }
//	          }
//	else{
//		  int cpt=0;
//		while(same && cpt<len1)
//		{ 
//		if (myword1[cpt]==myword2[cpt])
//			  cpt++;
//		else  
//		same=false;
//		}
//	
//	return same;
//	   }
//}
//else {
// return  false; }
//}