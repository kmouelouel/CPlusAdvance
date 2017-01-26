///* Name: kahina Mouelouel
//student ID:1470398
//Class :COMSC-171
//Instructor:Stuart Fogg
//*/
//
//
//#include <iostream>
//#include <string>
// 
//#include <fstream>
//#include <cstdlib>
//
//using namespace std;
//
//// this function delet all space in the beginning of line.
//string DeletSpaceInBEginning( string inputstr){
//	 int i=0, len=inputstr.length();
//	 if(len==0)
//	 {return inputstr; }
//	 else 
//	 {
//	while (inputstr[0]==' ')
//		{inputstr=inputstr.substr(1);
//	}
//		 	 
//return inputstr;
//	 }
//	 
//}
//// move the instruction between Do to done 
//void MoveInstDo_Done(ifstream inputfile, ofstream outfile){
//	string line;
//	inputfile>>line;
//    
//
//}
//
//// this function return the first word in the line instruction  
//	string FirstWord(string inputstr){
//	int i=0, len=inputstr.length();
//	string word;
//
//	while(inputstr[i]!=' ' ){
//	word+=inputstr[i];
//	i++;
//	}
//	return word;
//	}
//	// main function where the programm start the execution 
//int main(){
//	// list of keywords that determine how the program has to write
//		const int Size=10;
//	string  keywords[Size]={"while","until","for","case","if","done","esac","elif","else","fi"};
//	 string inputFile;
//	 int choose=0;
//	 string path;
//	 cout<<" What will be your input:"<<endl;
//	 cout<<"1)from user input\n2)from a File"<<endl;
//	 cin>>choose;
//	 
//	 //ofstream output("sourceoutt.txt");
//	 switch (choose)
//	 {
//	  case 1:
//	 break;
//	 case 2:
//		 // to creat file 
//			cout<<"please, entre the path to your source as C:/Demo/.."<<endl;
//			cin>>path;
//			 ifstream input;
//			 input.open(path);// OPE NHE FILE THAT GIVEN BY Chemin
//			 fstream output("resultfinal.txt");
//			 if(!input.is_open())
//				{ 
//					cerr<< "File could not opened "<< path<<endl;
//					exit(1);
//				}
//				else
//				{
//					cout<<"the file was opened "<< path<<endl;
//				}
//				 std::string line,word,thFirsteword; 
//				//The position of the first character that matches
//				 while(std::getline(input,line)){
//				 line= DeletSpaceInBEginning(line);
//				// input<<line<<endl;
//				 }
//				 output.close();
//				 
//			 while (input>>thFirsteword)
//	 				 {	
//						 cout<<thFirsteword<<endl;
//						 
//						 std::getline(input,line);
//						 cout<<line<<endl;
//					  //line= DeletSpaceInBEginning(line);
//					
//			  //output<<line<<endl;
//			 // cout<<line<<endl; 
//			  }
//		 		  
//		 break;
//	  /*  default:
//		 cout<<"I don't know what "<<choose<<" is!"<<endl; */
//	 }// end which 
//	 cout <<"the result of source"<<endl;
//system("pause");
//}// end main