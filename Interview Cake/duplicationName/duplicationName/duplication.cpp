/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
As a rule, you should delete duplicate values whenever possible to reduce costs and increase the accuracy of your data.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////// */
/*Duplicate elimination is conducted in several places in the software, such as DataBase, Clustering Configuration  
I pick up the question from the book : 
 (Duplicate Elimination) Use a one-dimensional array to solve the following problem. Read
in 10 numbers, each of which is between 10 and 100, inclusive. As each number is read, validate it
and store it in the array only if it isn’t a duplicate of a number already read. After reading all the
values, display only the unique values that the user entered. Provide for the “worst case” in which
all 10 numbers are different. Use the smallest possible array to solve this problem.
*/

#include <iostream>
#include <string> 
using namespace std;
const int Size =10;
// declaration of function prototype 

void InputArray(string[]);// input the values to the array
int TestValue(string, string[]);// test if a value exit already yes/no
void PrintArray(string []);// output the the values of the  array

int main()
 {
  // initialisation of Myarray to zero
 string  Myarray[10] = {""};
 InputArray(Myarray);
 PrintArray(Myarray);
 }// end main 





void InputArray( int  myArry[]){
	string  thename ="" ;
		int i =0;// initialisation 
	while(i<Size){
		cout << "please,entre a name of your employer: ";
		cin>> thename;
		//if (mynumber >= 10 && mynumber <= 100)// test if the input is in thr range [10,100]
		//{
			if (!TestValue(thename, myArry))// callthe function testValue to check 
			{
				myArry[i] = thename;
				++i;// increment the counter 
			}
			else
			{
				cout << "Error, a duplicate of a name  already read " << endl;
				// we don't increment the counter here 
				 
			}
		//}// with this test, user should entre only value between 
		//else { cout << "Error, your number has to be  between 10 and 100 : "<<endl; 
		// we don't increment the counter here
		//}

	}
 
}
int TestValue(string myvalue , string arraytest[]){
	int differe = 0, cpt=1;// initialisation 

	while (!differe && cpt <= Size){
		for(int i=0; i<myvalue.length();i++){
			string thename=arraytest[cpt];
		if (myvalue[i] == thename[i])
		{
			differe = 0;// there is duplication,
		}
		else
		{
			differe = 1;

		}
	  }
	}
		return found;// return 0 as no duplication , and  1, there is aduplication 
}
// print out the result of thye duplication 
	void PrintArray(int arraytest[]){
		int i = 0;
		cout << "output the  values that the user entered :\n";
		while (i < Size)
		{
		
			cout << arraytest[i]<<endl;
			i++;
		}
		system("pause");
	}