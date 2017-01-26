// part 1: get information drom user
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "Single.h"
#include "MarriedFilingJointly.h"
#include "MarriedFilingSeparately.h"
#include "HeadofHousehold.h"
#include "Person.h"
#include <fstream>
using namespace std;
// classes:
Person PersonClass;
single singleClass;
HeadofHousehold HeadofHouseholdClass;
MarriedFilingJointly MarriedFilingJointlyClass;
MarriedFilingSeparately MarriedFilingSeparatelyClass;
// create a file to save a data for each new customer
ofstream ClientFile;
 int Status=0, Nbreof_person=0;
 double TaxCredit=0,penalities=0,theTotal=0,kidscredit=0;
 int index=0;
  double SingleAmountOver[7]={0,922.50,5156.25,18481.25,46075.25,119401.25,119996.25};
   double MarriedAmountOver[7]={0,1845,10312.50,29387.50,51577.50,111324,129996.50};
   double HeadHouseholdAmountOver[7]={0,1315,6872.5,26722.5,49192.5,115737,125362};
   double MarriedSeparatelyAmountOver[7]={0,922.50,5156.25,14693.75,25788.75,55662.00,64998.25};
  double Taxwitheld=0;
 float Tax_brackets[7]={10,15,25,28,33,35,39.6};
  double theRate; 
   double TaxtableIncomeTT=0;
// check the total positive (-)refund (+) tax due  and print the decision with the amount
void PrintResult(){
    if (theTotal<=0){
        cout <<"\nthe total is :$-"<<(-1)*theTotal<<", so it is Refund\n ";
         ClientFile<<"\n**********************************************************";
        ClientFile<<"\nthe total is :$-"<<(-1)*theTotal<<", so it is Refund\n ";
         ClientFile<<"\n**********************************************************";
 }
 else {
    cout<<"\nthe total is :$+"<<theTotal<<" so it is Tax due\n";
     ClientFile<<"\n**********************************************************";
    ClientFile<<"\nthe total is :$+"<<theTotal<<" so it is Tax due\n";
     ClientFile<<"\n**********************************************************";

 }
}
// end print the estimation

int TaxRateIndex(double amount,int MinArray[],int MaxArray[]){
        int i=0;

          while(true)
        { if((amount>=MinArray[i]) && (amount<=MaxArray[i])) break;
          i++;

        }
        ClientFile<<"\nyour Total Taxtable is between $"<<MinArray[i]<<" and $"<<MaxArray[i];

        return i;
}// end TaxRate



 void  whoFillingTax(){
string UserName;
ClientFile<<"----------------------------------------------------------------\n";
  cout<<"Please enter, your full name !\n";
  getline(cin,UserName);
  PersonClass.SetFullename(UserName);
  string ClientFileName=UserName+".txt";
	ClientFile.open(ClientFileName,ios::out);
	if(!ClientFile){
		cerr<<"I'am sorry, but "<<ClientFileName<<" cannot be opened/created."<< endl;
		exit(1);
	 }

  ClientFile<<"the USA Basic Federal Tax Formula 2015\n";
  ClientFile<<"the user name  is :"<<UserName;
    cout<<"Choose Status:\n (1)Single,\n (2)Married Filing Jointly OR Qualifying Widow(er) \n";
  cout<<" (3)Married Filing Separately,\n (4)Head of Household,\n";
  cin>>Status;
  PersonClass.SetStatus(Status);
  ClientFile<<"\nThe status is: "<<Status;
  
   }// end whoFilingTax;


  void RateTax(int indexIn,double Amount,double AmountOverArray[],int  DiffArray[]){
     if(indexIn==0){
        theRate= AmountOverArray[indexIn]+((Tax_brackets[indexIn]/100)*(Amount-DiffArray[0]));
        ClientFile<<"\n the tax rate %"<<Tax_brackets[indexIn];
        ClientFile<<"\n the over amount $"<<AmountOverArray[indexIn];
         ClientFile<<"\n**********************************************************";
        ClientFile<<"\nTotal Tax :$"<<theRate;
         ClientFile<<"\n**********************************************************";

}// end if
 else{
        theRate= AmountOverArray[indexIn]+((Tax_brackets[indexIn]/100)*(Amount-DiffArray[index-1]));
        ClientFile<<"\n the tax rate %"<<Tax_brackets[indexIn];
        ClientFile<<"\n the over amount $"<<AmountOverArray[indexIn];
         ClientFile<<"\n**********************************************************";
        ClientFile<<"\nTotal Tax :$"<<theRate;
         ClientFile<<"\n**********************************************************";
}// end 00
       }

void  AdjustGrossIncome()
{ 
	double inGrossIncome, inTaxwitheld,  inadjustAmount,   inGrossIncomes2,  inTaxwitheld2,   inadjustAmount2;
 cout<<"Please,enter your annual earned Income \n";
  int inStatus=PersonClass.GetStatus();

 switch(inStatus){
     case 1:// single one income
         cout<<"Your Income\n";
         cout<<"Your gross income(ie W2,Wages): $";
         cin>> inGrossIncome;
		singleClass.setWage(inGrossIncome);
		ClientFile<<"\nThe wages :$"<<inGrossIncome;
        cout<<"Your total Federal withholding: $";
         cin>>inTaxwitheld;
		 singleClass.setTaxwitheld(inGrossIncome); 
		Taxwitheld=singleClass.getTaxwitheld();
         ClientFile<<"\nYour total Federal withholding :$"<<inTaxwitheld;
         cout<<"Your total adjustments, or 0 :$";
         cin>> inadjustAmount;
		  singleClass.setadjustAmount(inadjustAmount); 
         ClientFile<<"\n  Less Adjustment :$"<<inadjustAmount;
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
         ClientFile<<"\n**********************************************************";
         ClientFile<<"\nAdjusted Gross Income (AGI); $"<<singleClass.AdjoustedGrossIncome();
         ClientFile<<"\n**********************************************************";
         ClientFile<<"\n**********************************************************";
		  TaxtableIncomeTT=singleClass.AdjoustedGrossIncome()-DeductionExemplecation();
         ClientFile<<"\nTaxtable Income $"<<TaxtableIncomeTT;
		 ClientFile<<"\n**********************************************************";
		 index=TaxRateIndex(TaxtableIncomeTT,singleClass.GetsingleDeductionMinArry(),singleClass.GetsingleDeductionMaxArry());
  RateTax(index,TaxtableIncomeTT,SingleAmountOver,singleClass.GetsingleDeductionMaxArry());
		 
		 break;
     case 2:// married two income
         cout<<"Your Income";
         cout<<"\nYour wages : $";
         cin>> inGrossIncome;
		 MarriedFilingJointlyClass.setWage(inGrossIncome);
         ClientFile<<"\n Gross Income  :$"<<inGrossIncome;
         cout<<"\nYour total Federal withholding: $";
         cin>>inTaxwitheld;
		 MarriedFilingJointlyClass.setTaxwitheld(inTaxwitheld);
         ClientFile<<"\n Your total Federal withholding: $"<<inTaxwitheld;
         cout<<"\nYour total adjustments, or 0 :$";
         cin>> inadjustAmount;
		 MarriedFilingJointlyClass.setadjustAmount(inadjustAmount);
         cout<<"Spouse's Income\n";
         cout<<"\nyour spouse's wages :$";
         cin>>inGrossIncomes2;
		 MarriedFilingJointlyClass.setwagespouse(inGrossIncomes2);
         ClientFile<<"\nSpouse's gross Income  :$"<<inGrossIncomes2;
         cout<<"\nYour spouse's total Federal withholding :$";
         cin>>inTaxwitheld2;
		 MarriedFilingJointlyClass.setTaxwitheldspouse(inTaxwitheld2);
		 Taxwitheld=MarriedFilingJointlyClass.getTaxwitheld()+MarriedFilingJointlyClass.getTaxwitheldspouse();
         ClientFile<<"\nYour spouse's total Federal withholding :$"<<inTaxwitheld2;
         cout<<"\nYour spouse's total adjustments, or 0 :$";
         cin>> inadjustAmount2;
		 MarriedFilingJointlyClass.setadjustAmountspouse(inadjustAmount2);
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
          ClientFile<<"\n**********************************************************";
         ClientFile<<"\nAdjusted Gross Income (AGI) $"<<MarriedFilingJointlyClass.AdjoustedGrossIncome();
          ClientFile<<"\n**********************************************************";
          ClientFile<<"\n**********************************************************";
		 TaxtableIncomeTT=MarriedFilingJointlyClass.AdjoustedGrossIncome()-DeductionExemplecation();
         ClientFile<<"\nTaxtable Income $"<<TaxtableIncomeTT;
		 ClientFile<<"\n**********************************************************";
		  ClientFile<<"\n**********************************************************";
		 index=TaxRateIndex(TaxtableIncomeTT,MarriedFilingJointlyClass.GetMarriedDeductionMinArry(),MarriedFilingJointlyClass.GetMarriedDeductionMaxArry());
 RateTax(index,TaxtableIncomeTT,MarriedAmountOver,MarriedFilingJointlyClass.GetMarriedDeductionMaxArry());
        break;
     case 3:
          
         cout<<"Your Income\n";
         cout<<"Your gross income(ie W2,Wages): $";
         cin>> inGrossIncome; 
		MarriedFilingSeparatelyClass.setWage(inGrossIncome); 
         ClientFile<<"\nThe wages :$"<<inGrossIncome;
         cout<<"Your total Federal withholding: $";
         cin>>inTaxwitheld; 
		 MarriedFilingSeparatelyClass.setTaxwitheld(inGrossIncome); 
		Taxwitheld=MarriedFilingSeparatelyClass.getTaxwitheld();
         ClientFile<<"\nYour total Federal withholding :$"<<inTaxwitheld;
         cout<<"Your total adjustments, or 0 :$";
         cin>> inadjustAmount; 
		MarriedFilingSeparatelyClass.setadjustAmount(inadjustAmount); 
         ClientFile<<"\n  Less Adjustment :$"<<inadjustAmount;
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
         ClientFile<<"\n**********************************************************";
        ClientFile<<"\nAdjusted Gross Income (AGI); $"<<MarriedFilingSeparatelyClass.getAdjoustedGrossIncome();
         ClientFile<<"\n**********************************************************";
         ClientFile<<"\n**********************************************************";
		 TaxtableIncomeTT=MarriedFilingSeparatelyClass.getAdjoustedGrossIncome()-DeductionExemplecation();
        ClientFile<<"\nTaxtable Income $"<<TaxtableIncomeTT;
		 ClientFile<<"\n**********************************************************";
		 ClientFile<<"\n**********************************************************";
		 index=TaxRateIndex(TaxtableIncomeTT,MarriedFilingSeparatelyClass.GetMarriedSepratDeductionMinArry(),MarriedFilingSeparatelyClass.GetMarriedSepratDeductionMaxArry());
       RateTax(index,TaxtableIncomeTT,MarriedSeparatelyAmountOver,MarriedFilingSeparatelyClass.GetMarriedSepratDeductionMaxArry());
		 
		 break;
     case 4:
          
         cout<<"Your Income\n";
         cout<<"Your gross income(ie W2,Wages): $";
         cin>> inGrossIncome; 
		HeadofHouseholdClass.setWage(inGrossIncome);
         ClientFile<<"\nThe wages :$"<<inGrossIncome;
         cout<<"Your total Federal withholding: $";
         cin>>inTaxwitheld; 
		HeadofHouseholdClass.setTaxwitheld(inGrossIncome);
		Taxwitheld=HeadofHouseholdClass.getTaxwitheld();
         ClientFile<<"\nYour total Federal withholding :$"<<inTaxwitheld;
         cout<<"Your total adjustments, or 0 :$";
         cin>> inadjustAmount; 
		HeadofHouseholdClass.setadjustAmount(inadjustAmount);
         ClientFile<<"\n  Less Adjustment :$"<<inadjustAmount;
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
         ClientFile<<"\n**********************************************************";
         ClientFile<<"\nAdjusted Gross Income (AGI); $"<<HeadofHouseholdClass.AdjoustedGrossIncome();
         ClientFile<<"\n**********************************************************";
         ClientFile<<"\n**********************************************************";
		  TaxtableIncomeTT=HeadofHouseholdClass.AdjoustedGrossIncome()-DeductionExemplecation();
         ClientFile<<"\nTaxtable Income $"<<TaxtableIncomeTT;
		 ClientFile<<"\n**********************************************************";
		   ClientFile<<"\n**********************************************************";
		 index=TaxRateIndex(TaxtableIncomeTT,HeadofHouseholdClass.GetHeadHouseloadDeductionMinArry(),HeadofHouseholdClass.GetHeadHouseloadDeductionMaxArry());
		 RateTax(index,TaxtableIncomeTT,HeadHouseholdAmountOver,HeadofHouseholdClass.GetHeadHouseloadDeductionMaxArry());


		 break;
		 default:
    cout<<"To do the federal tax return you have to fit in one of this category";
  

} 

 }
 
 double DeductionExemplecation(){

          double TaxIncomeTT=0;
            switch (Status){
        case 1:
            ClientFile<<"\n Less Standard Deduction : $"<<singleClass.getDeduction();
            ClientFile<<"\n Less Personal Exemption : $"<<singleClass.getExcemption();
            TaxIncomeTT=singleClass.getDeduction()+(1*singleClass.getExcemption());
            break;
        case 2:
            cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
			MarriedFilingJointlyClass.SetNbreKids(Nbreof_person);
            ClientFile<<"\nthe Number of children :"<<Nbreof_person;
            ClientFile<<"\n Less Standard Deduction : $"<<MarriedFilingJointlyClass.getDeduction();
            ClientFile<<"\n Less Personal Exemption : $"<<MarriedFilingJointlyClass.getExcemption();
             TaxIncomeTT=MarriedFilingJointlyClass.getDeduction()+((2+Nbreof_person)*MarriedFilingJointlyClass.getExcemption());
             break;
        case 3:
             cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
			MarriedFilingSeparatelyClass.SetNbreKids(Nbreof_person);
            ClientFile<<"\nthe Number of children :"<<Nbreof_person;
           ClientFile<<"\n Less Standard Deduction : $"<<MarriedFilingSeparatelyClass.getDeduction();
           ClientFile<<"\n Less Personal Exemption : $"<<MarriedFilingSeparatelyClass.getExcemption();
             TaxIncomeTT=MarriedFilingSeparatelyClass.getDeduction()+((2+Nbreof_person)*MarriedFilingSeparatelyClass.getExcemption());
            break;

        case 4:
             cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
			HeadofHouseholdClass.SetNbreKids(Nbreof_person);
            ClientFile<<"\nthe Number of children :"<<Nbreof_person;
            ClientFile<<"\n Less Standard Deduction : $"<<HeadofHouseholdClass.getDeduction();
            ClientFile<<"\n Less Personal Exemption : $"<<HeadofHouseholdClass.getExcemption();
             TaxIncomeTT=HeadofHouseholdClass.getDeduction()+((1+Nbreof_person)*HeadofHouseholdClass.getExcemption());
            break;
            break;

            }// end switch

            return TaxIncomeTT;
}
void CreditPenalties(){
   // check credits
    if (Status==1){
    cout<<"\nYour Tax Credits,or 0 : $";
    cin>>TaxCredit;
     }
else {
cout<<"\nhow much credits do your children receive, or 0 ? $";
   cin>>kidscredit;
   ClientFile<<"\nTax Credit for each child is :$"<<kidscredit ;
   TaxCredit=kidscredit*Nbreof_person;

}
// input penalties
 cout<<"\nYour penalties,or 0 : $";
 cin>>penalities;
 // output in file credits and penalties
 ClientFile<<"\nLess Tax credit $"<<TaxCredit;
 ClientFile<<"\nLess Tax payment withholding $"<<Taxwitheld;
 ClientFile<<"\nAdd Penalties $"<<penalities;
 //estimate  the tax return
 theTotal=theRate-TaxCredit-Taxwitheld+penalities;

}

	 