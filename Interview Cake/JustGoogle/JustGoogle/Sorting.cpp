#include <iostream>

using namespace std;

// function prototype
void Bublesort(int*,int);
void swape(int,int);
	void PrintOutArray(int* , int );
	//main function
int main(){


	int Arraytest[5]={5,2,9,7,1};
	int  *arrptr=Arraytest;
	cout<<"print array before sorting"<<endl;
	PrintOutArray(arrptr,5);
	
	Bublesort(arrptr,5);
	 cout<<"print the resoult afer storing"<<endl;
	
	PrintOutArray(arrptr,5);
system("pause");

}//end main 

void PrintOutArray(int *_array, int insize){ 
	for(int i=0;i<insize;i++){
	cout<<_array[i]<<endl;
	
	
	}
}
void swape(int *var1,int *var2){
	int * temp;
	temp=var1;
	var1=var2;
	var2=temp;
}
void Bublesort(int * myarry, int insize){
	 
	
	for( int i=0;i<insize-1; i++){
		for(int j=1; j<insize; j++){
			if (myarry[i]>myarry[j])
			   swape(myarry[i],myarry[j]);
		}
	}



}// end function 