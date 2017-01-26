#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // declaration of variables
    double BillsCoins[10]={50,20,10,5,1,0.50,0.25,0.10,0.05,0.01};
     int changeArray[10]={};
    double purchaseAmount=0,AmountTendered=0 ,change=0;
    int num=0;
    cout<<"Enter the purchase amount and amount tendered \n";
    cin>>purchaseAmount>>AmountTendered;
    cout<<"For a purchase of "<<purchaseAmount<<" ,the amount tendered is "<<AmountTendered;
    change=AmountTendered-purchaseAmount;
    cout<<"\nThe output :\n $"<<change;
    for(int i=0;i<=9;i++)
    {  if(change>=BillsCoins[i])
         { num=change/BillsCoins[i];
         changeArray[i]= num;
         if (i<=4)
         {
          if (num>=2)
            cout<<"\n "<<changeArray[i]<<" "<<"$"<<BillsCoins[i]<<" bills";
            else
            cout<<"\n "<<changeArray[i]<<" "<<"$"<<BillsCoins[i]<<" bill";
            }
        else
          cout<<"\n "<<changeArray[i]<<" "<<BillsCoins[i]*100<<"-cent coin";
 change=change-( num*BillsCoins[i]);

    }

    }

    //
    cout << endl;
    return 0;
}
