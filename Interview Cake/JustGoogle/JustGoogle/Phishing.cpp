///*1. EBay 2. PayPal 3. Bank First 4. Amazon.com 5. Chase Bank 6. Wells Fargo 7. Bank of Oklahoma 8. Barclays Bank 9. Bank of America 10. People's Bank */
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <fstream>
//using namespace std;
//
//const int PhisingSize=11;
//string PhisingWords[PhisingSize]={"EBay","PayPal","Bank First","Amazon",
//		"Chase Bank","Wells Fargo","Bank of Oklahoma","Barclays Bank",
//		"Bank of America","People's Bank","Internal Revenue Service"};// 
//
//	int PointS[PhisingSize]={1,1,1,3,1,2,1,1,1,3,1};
//	
//void Occurance(int []);
//string tolower(string);
//void PrintFile(int[]);
//int main(){
//	 int count_Array[PhisingSize];
//	 Occurance(count_Array);
//	 PrintFile(count_Array);
//  system("pause");
//   system("pause");
//
//}//end main
//
//	void Occurance(int thewordCount[]){
//			string line;
//		// open the file
//	string FileName="PhisingEmail.txt";
//	ifstream inFile(FileName,ios::out);
//	if (!inFile)
//	{	cout << "Could not open PhisingEmail.txt"<<endl;
//	exit(1);}
//	else 
//		cout << "the file PhisingEmail.txt is opened"<<endl;
//
//	
//	while (inFile >>line){
//	
//		for (int i=0; i<PhisingSize; i++){
//		if (PhisingWords[i]==tolower(line))
//			thewordCount[i]=thewordCount[i]+1;
//		}}
//		
//		
//		}
//
//	void PrintFile(int counter[]){
//	int totalpts=0;
//	// display the deader
//	cout<<"word"<<"\t"<<"Count"<<"\t"<<"Points"<<endl;
//	for (int i=0; i<PhisingSize; i++)
//	{	if( counter[i]==0) continue;
//	int points=counter[i]*PointS[i];
//
//	totalpts+=points;
//	cout<<PhisingWords[i]<<"\t"<<counter[i]<<"\t"<<"points"<<endl;
//	}
//	cout<<"Total points:"<<totalpts<<endl;
//	}
//
//
//
//	string tolower(string theword){
//	string word;
//	for (int j=0 ; j<theword.size(); j++){
//		word+=tolower(theword[j]);
//		return word;
//	
//	}
//
//	
//	}