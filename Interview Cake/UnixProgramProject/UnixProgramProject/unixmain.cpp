/* Name : Kahina Mouelouel
   Id   : 1470398
   Resume: I programmed my solution by using C++ environenmet
           as we start the exuction of program use hase to choose
		     1) prompt  the source 
			 2) read from the file
   Algorithm: first,I used vector as data structure to save my input data because it is dynamic structure
              second, I delete all the space in the beginning of each line of the program
			  then, I look to block do-done to do the indent the code block, and I do same for the block if-fi
			  finaly, related to the choose of the user if the input is from keybord so the result will be showed at the end.
			    if he/she use a file source so she/ he has to choose the path for input and for the input.
				
   */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// declaration Global variables
// declaration of local varaibles
	int choose;//it is integer tell us if the input will be by user or by file 
    string thenewline;
	 string theline;
	int i=0; //  the index of the vector
	// path to the file
	string path;
	// use preprocessor fstream to open file
	ifstream input;
	// 
	 size_t j, found_do,found_if,found_done,found_fi,found_elif,found_else;  
  string move1Time=" " ;
  bool founddo=false,founddone=false, foundif=false, foundfi=false;
	// declare a vector because it is a dynamic array to save the input from an user or a file
	vector<string> program1(5);// a dynamic array with 3 elements
 
// declaration of functions
 string DeletSpaceInBEginningline( string inputstr){
	 int i=0, len=inputstr.length();
	 if(len==0)
	 {return inputstr; }
	 else 
	 {
	while (inputstr[0]==' ')
		{inputstr=inputstr.substr(1);
	}
		 	 
return inputstr;
	 }
 }
void DeletSpaceInBEginningAllScript()
{ for(  j=0; j< program1.size();j++)
	 	{ 
		program1[j]=DeletSpaceInBEginningline(program1[j]) ;
}
}	   
 void indentCodeBlocks(string keyword1, string keyword2, string moveleft)
  {
	  for(  j=0; j< program1.size();j++)
	 	{ 
 	    thenewline= program1[j];
		found_do=thenewline.find(keyword1);
		if(found_do!=std::string::npos && !founddone)
		{
		founddo=true;
		// savei=i;
		found_done=thenewline.find(keyword2);
			while(found_done==std::string::npos)
			 {
			  thenewline= program1[j];
			  found_done=thenewline.find(keyword2);
			  program1[j]=moveleft+thenewline;
			    j++;
			}	// end while	
			  j=j-1; 
            founddone=true;
			 program1[j]=thenewline;

		}// end if
	  }// end for
  }// end void

 void indentCodeBlocksIf(string keyword1, string keyword2,string keywordelif, string keywordelse)
  {
	  for(  j=0; j< program1.size();j++)
	 	{ 
 	    thenewline= program1[j];
		found_if=thenewline.find(keyword1);
		if(found_if!=std::string::npos)
		{  
			foundif=true;
		        j++;
			    thenewline= program1[j];
	     	found_fi=thenewline.find(keyword2);//found_fi
			while(found_fi==std::string::npos && foundif )
			 {
				 
			  thenewline= program1[j];
			  found_elif=thenewline.find(keywordelif);
			  found_else=thenewline.find(keywordelse);
			  if((found_elif!=std::string::npos )||(found_else!=std::string::npos))
			  {
			  program1[j]=thenewline;
			  
			  }//end if
			  else {
			  program1[j]="  "+thenewline;
			  }//end else
			    j++;
			    thenewline= program1[j];
			  found_fi=thenewline.find(keyword2);//  fi
			  if(found_elif!=std::string::npos ){
			
			   foundif=false;}

			}	// end while	
			
			 

		}// end if 
	  }// end for
  }// end void

void InputDataIntoVector(int inchoose)
{
	
	switch(inchoose)
	{
	case 1:
	  cout<<"please prompt your script, or -1 to quit the imput"<<endl;
      cout<<"Write each instruction in one line."<<endl;
	  getline(cin,thenewline);
	  while(true){
		 getline(cin,thenewline);
		 if(thenewline=="-1") break;
		 if (i<5){
		  program1[i]=thenewline;
		  ++i;
		 }
		else {
		 program1.push_back(thenewline);
		  } 
		}// end while 
		break;
	case 2: 
		 // to creat file 
 		cout<<"please, entre the path to your source as C:/Demo/.."<<endl;
 		cin>>path;
 		 
 		 input.open(path);// OPE NHE FILE THAT GIVEN BY Chemin
//			 fstream output("resultfinal.txt");
			 if(!input.is_open())
 				{ 
 					cerr<< "File could not opened "<< path<<endl;
 					exit(1);
 			}
 				 
			 // read the file line by line 
 				 while(std::getline(input,thenewline)){
 	               if (i<5){
	            	  program1[i]=thenewline;
		              ++i;
		              }
		          else {
		          program1.push_back(thenewline);
		          } 

				 }
				 input.close();
		break;
	default:
		cout<<"There is an error in your input, Please try again!"<<endl;
		break;
	 


	}

	
}

void PrintTheResult(int inchoose){
	switch (inchoose)
	{
	case 1:
	for(  j=0; j< program1.size();j++)
	  { cout<<program1[j]<<endl;}
	break;
	case 2:
		cout<<"please, entre the path, where you want to save the result as C:/Demo/.."<<endl;
 		cin>>path;
		ofstream outpatch(path, ios::out);
		 if(!outpatch.is_open())
 				{ 
 					cerr<< "File could not opened "<< path<<endl;
 					exit(1);
 			}
 			

for(  j=0; j< program1.size();j++)
	  { outpatch<<program1[j]<<endl;}
 
outpatch.close();

		break;
}// end switch

}

int main(){
	
	cout<<"this program permet to indent a program to the standard bash"<<endl;
	cout<<" What will be your input:"<<endl;
 	 cout<<"1)from user input\n2)from a File\n3)quit the program"<<endl;
  cin>>choose;
  while(choose!=3){
  switch(choose){
  case 1:
	 // input data and save then in dynamic array: vector 
	  InputDataIntoVector(choose);
	  break;
  case 2:
	   //   save the data from a file into a dynamic array: vector 
	  InputDataIntoVector(choose);
	 
  break;
  case 3:
	  cout<<"Thank you !"<<endl;

  break;
  default:
  cout<<"I don't kmow what " <<choose<<"means"<<endl;
  break;}
  	DeletSpaceInBEginningAllScript();
  // looking for bloc to indent

	indentCodeBlocks("do","done"," ");
	indentCodeBlocksIf("if","fi","elif","else");
  // print the output 
  PrintTheResult(choose);
  
	cout<<"this program permet to indent a program to the standard bash"<<endl;
	cout<<" What will be your input:"<<endl;
 	 cout<<"1)from user input\n2)from a File\n3)quit the program"<<endl;
  cin>>choose;
  }
  system("pause");
}//end main 
