#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // declaration of variables
    int bills50=0,bills20=0,bills10=0,bills5=0,bills1=0;
     int coins50=0,coins25=0,coins10=0,coins5=0,coins1;
    double purchaseAmount=0,AmountTendered=0 ,change=0;
    cout<<"Enter the purchase amount and amount tendered \n";
    cin>>purchaseAmount>>AmountTendered;
    cout<<"For a purchase of "<<purchaseAmount<<" ,the amount tendered is "<<AmountTendered;
    change=AmountTendered-purchaseAmount;
    cout<<"\nThe output is  :\n $"<<change;
   // looking for $50 bills
    if(change>=50)
         {
         bills50=change/50;
         if (bills50>=2)
            cout<<"\n "<<bills50<<" "<<"$"<<"50"<<" bills";
         else
            cout<<"\n "<<bills50<<" "<<"$"<<"50"<<" bill";
         change=change-( bills50*50);
         }// end if $50 bills
    if(change>=20)
         {
         bills20=change/20;
         if (bills20>=2)
            cout<<"\n "<<bills20<<" "<<"$"<<"20"<<" bills";
         else
           cout<<"\n "<<bills20<<" "<<"$"<<"20"<<" bill";
         change=change-( bills20*20);
         }
   // looking if I need to make $10 bills change
    if(change>=10)
           {
            bills10=change/10;
            if (bills10>=2)
            cout<<"\n "<<bills10<<" "<<"$"<<"10"<<" bills";
            else
           cout<<"\n "<<bills10<<" "<<"$"<<"10"<<" bill";
           change=change-( bills10*10);
         }
         // looking for $5 bills

    if(change>=5)
         {
         bills5=change/5;
         if (bills5>=2)
            cout<<"\n "<<bills5<<" "<<"$"<<"5"<<" bills";
         else
           cout<<"\n "<<bills5<<" "<<"$"<<"5"<<" bill";
       change=change-( bills5*5);
         } // end change >>5
       // looking for $1 if needed
    if(change>=1)
         {
         bills1=change/1;
         if (bills1>=2)
            cout<<"\n "<<bills1<<" "<<"$"<<"1"<<" bills";
         else
           cout<<"\n "<<bills1<<" "<<"$"<<"1"<<" bill";
         change=change-(bills1);
         } // end change >>1
         // looking for 50 cent coin
    if(change>=0.50)
          {
          coins50=change/0.50;
           if (coins50>=2)
            cout<<"\n "<<coins50<<" "<<"50"<<"-cent coins";
            else
            cout<<"\n "<<coins50<<" "<<"50"<<"-cent coin";
            change=change-(coins50*0.50);
         } // end change >>1
       // looking for change for 25 cents
    if(change>=0.25)
           {
            coins25=change/0.25;
            if (coins25>=2)
               cout<<"\n "<<coins25<<" "<<"25"<<"-cent coins";
               else
               cout<<"\n "<<coins25<<" "<<"25"<<"-cent coin";
            change=change-( coins25*0.25);
          }// end change  0.25
// looking for change 10cents
    if(change>=0.10)
            {
              coins10=change/0.10;
              if (coins10>=2)
                cout<<"\n "<<coins10<<" "<<"10"<<"-cent coins";
             else
               cout<<"\n "<<coins10<<" "<<"10"<<"-cent coin";
             change=change-(coins10*0.10);
            }
           // looking for change 5 cents
    if(change>=0.05)
           {
            coins5=change/0.05;
           if (coins5>=2)
               cout<<"\n "<<coins5<<" "<<"5"<<"-cent coins";
          else
              cout<<"\n "<<coins5<<" "<<"5"<<"-cent coin";
          change=change-(coins5*0.05);
          }
            // looking for 1 cents

    if(change>=0.01)
          {
          coins1=change/0.01;
          if (coins1>=2)
            cout<<"\n "<<coins1<<" "<<"1"<<"-cent coins";
          else
           cout<<"\n "<<coins1<<" "<<"1"<<"-cent coin";
    //   change=change-(coins1*0.01)
         }
    cout << endl;
    return 0;
}
