#include <iostream>
using namespace std;
int main()
{
     //Write a program that inputs three integers from the key- board and
     int  num1=0,num2=0,num3=0, minnum=0, maxnum=0;
    //prints the sum, average, product, smallest and largest of these numbers.
    cout << "Please,enter the first number " ;
    cin>>num1;
    cout << "\nPlease,enter the second number " ;
    cin>>num2;
    cout << "\nPlease,Enter the third number " ;
    cin>>num3;
    cout<<"\nThe sum is : "<<num1+num2+num3<<"\n";
    cout<<"\nThe average  is : "<<double (num1+num2+num3)/3<<"\n";
     cout<<"\nThe product is : "<<num1*num2*num3<<"\n";
     minnum =num1;
     maxnum=num1;
        if (minnum>num2)
            minnum=num2;
        if (maxnum<num2)
            maxnum=num2;
        if (minnum>num3)
            minnum=num3;
        if (maxnum<num3)
            maxnum=num3;

    cout<<"\nThe smallest is : "<<minnum<<"\n";
    cout<<"\nThe largest  is : "<<maxnum<<"\n";
    cout << endl;
    return 0;
}
