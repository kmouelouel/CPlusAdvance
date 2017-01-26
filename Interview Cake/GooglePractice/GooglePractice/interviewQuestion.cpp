#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void UniqueInteger();
void fusionArray();
void multipleVlaue();
void anagrams();
int main(){
	anagrams();
	//UniqueInteger();
	//multipleVlaue();
	//fusionArray();
	system("pause");
}// end main

void anagrams(){
	string word1="tram",word2="mart";
	bool  same=false;
	int j=0;
	for(int i=0;i<word1.length();i++)
			{	same=false;
		while (j<word2.length() || ! same){
	    char c1=word1[i];
	char c2=word2[j];
		if(c1==c2)
			 same=true;
	j++;
	
	
	}
	
	}
	if (same==true)
		cout<<"the two words are anagrams "<<endl;
	else 
		cout<<"the two words are anagrams "<<endl;

}
void UniqueInteger(){
	int my_Array[5]={13,20,20,13,10};
bool duplicat=false, found=false;
int i=0,j=1,thenumber=-1;
while(i<5){
 	while (j<5 && i!=j && !duplicat){
	if(my_Array[i]==my_Array[j])
	{duplicat=true;
	thenumber=-1;
	}
	else
thenumber=my_Array[i];
	 
	j++;
}
	j=0;
	duplicat=false;
	i++;

}
cout<<"the unique number is  " <<thenumber<<endl;

}// end function

void  multipleVlaue(){
 	/*cout<<"hello,we doing the question in "<<endl;
	int my_array[4]={2,4,8,6};
	int my_arrayResult[4]={0};
	int j=0,i=0,times=1;
	while(j<4){
			if (j==0){
			i=j+1;
				while(i<4){
					times=times*my_array[i];
						i++;
						}
					my_arrayResult[j]=times;
					}
			else{
				times=1;
					for ( i=0; i<4;i++)
						{

							if (j==i) {continue;}

							times=times*my_array[i];
						 
						}
			          my_arrayResult[j]=times;
					}
			j++;
				}


		for ( i=0; i<4;i++)
	cout<<my_arrayResult[i]<<endl;
	*/
	
	}
 

void fusionArray(){
/*cout<<"hello,we doing the question in "<<endl;
	int my_array[6]={2,4,8,6,12,10};
	int Alicia_array[6]={9,5,11,0,7,3};
 int j=0;
	int sorted[12]={0};
	for (int i=0; i<12;i=+2){
	sorted[i]=my_array[j];
	sorted[i+1]=Alicia_array[j];
	++j;
	i=i+2;
 
	
	}// end for 

	for (int i=0; i<12;i++)
	cout<<sorted[i]<<endl;

*/
}