#include <iostream>

using namespace std;

int main()
{
   // declaration of variables
    double ones=0,fives=0,tens=0,twentys=0,fiftys=0, hundred;
    double BillsCoins[10]={50,20,10,5,1,0.25,0.10,0.05,0.01};
   double purchaseAmount=0,AmountTendered=0 ,change=0;
   double rest=0;
    cout<<"Enter the purchase amount and amount tendered \n";
    cin>>purchaseAmount>>AmountTendered;
    cout<<"For a purchase of "<<purchaseAmount<<" ,the amount tendered is "<<AmountTendered;
    change=AmountTendered-purchaseAmount;

    for(int i=0;i<10;i++)
    { if(BillsCoins[i]<=change)
     {
                 fiftys= change/50;
       rest= change%50;
       cout<<"the bills are: "<<fiftys<<" the rest is: "<<rest;
    }
    else {

    }

    }
    //
    cout << endl;
    return 0;
}
