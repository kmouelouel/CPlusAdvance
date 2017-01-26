#include <iostream>
#include <cstdlib> // random numbers
#include <ctime>
using namespace std;
//
void Game();
int flip();




int main()
{


   Game() ;

}// end main
// functions
 void Game(){
    int nbtest=1, heads=0, tails=0;
 srand(time(0));
while(nbtest<=100)
{   nbtest++;
   if (flip()==0)
    tails++;
    else
    heads++;
    }
    cout<<"\nFor toss of the coin:"<<nbtest-1<<" times.\nWe have :\n "<< heads <<" heads ";
     cout<<" \n "<<tails<<" tails\n\n";
}
int flip(){

       int  CoinSide=rand()%2;
        if (CoinSide==1)
        return 1;
        else
        return 0;
         }
