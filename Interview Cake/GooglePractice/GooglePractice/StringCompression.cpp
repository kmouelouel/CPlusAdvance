//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Function declaration 
//string Compress(string);
//int main(){
//	string str1 ;
//	cout<<"Please, type the string that will be compressed:";
//	getline(cin,str1);
//	cout<<endl;
//	cout<<"the new string compressed is:"<<endl;
//	cout<<Compress(str1)<<endl;
//	system("pause");
//
//}
//string Compress(string thestring){
// string newstring="";
//int len=thestring.length();
//
//int i=0,j=1,nbreChar=0;
//char c1,c2;
//while(i<len && j<len){
//	c1=thestring[i];c2=thestring[j];
// 	while (c1==c2 && j<len){
//		//thestring=thestring.substr(0,i)+char(nbreChar)+thestring.substr(j+1);
//		++nbreChar;
//		 
//		j++;
//		c2=thestring[j];
//	} 
//	 newstring+=c1,
//	 	newstring+='0'+nbreChar;
//	//	cout<<newstring<<endl;
//	//len=len-nbreChar;
//	nbreChar=0;
//	i=j;
//	j++;
//	
//
//}//end while
//return newstring;
//}