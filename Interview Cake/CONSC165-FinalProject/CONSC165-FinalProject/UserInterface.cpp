#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "Single.h"
#include "person.h"
#include "MarriedFilingJointly.h"
#include "MarriedFilingSeparately.h"
#include "HeadofHousehold.h"
using namespace std;
// declaration of clases 
single classSingle;
Person classPerson;
MarriedFilingSeparately classMarriedFilingSeparately;
MarriedFilingJointly classMarriedFilingJointly;
HeadofHousehold classHeadofHousehold;
// global declaration variables::
 string UserName;
  ofstream fout;
 double  personal_exemption_amount=4000;
    int Status=0, Nbreof_person=0;
 double  stndardDeduction[4]={6300,12600,6300,9250};
 double TaxtableIncomeTT=0,agi=0,TaxCredit,penalities,theTotal,kidscredit;
  double GrossIncome=0,adjustAmountspouse=0,GrossIncomespouse=0,adjustAmount=0,Taxwitheldspouse,Taxwitheld=0,TotalTaxwitheld=0;
 // standard deduction
  double singleDeductionMinArry[7]={0,9251,37501,90851,189501,412001,413650};
   double singleDeductionMaxArry[7]={9250,37500,90850,189500,412000,413650,10000000};
   
   double MarriedDeductionMinArry[7]={0,18476,74976,151376,230701,412001,465355};
   double MarriedDeductionMaxArry[7]={18475,74975,151375,230700,412000,465350,10000000};
   
   double MarriedSepratDeductionMinArry[7]={0,9251,37501,75701,115351,206001,232676};
   double MarriedSepratDeductionMaxArry[7]={9250,37500,75700,115350,206000,232675,10000000};
  
   double HeadHouseloadDeductionMinArry[7]={0,13176,50201,129751,210101,412001,439501};
   double HeadHouseloadDeductionMaxArry[7]={13175,50250,129750,210100,412000,439500,10000000};
   double Tax_brackets[7]={10,15,25,28,33,35,39.6};
   double SingleAmountOver[7]={0,922.50,5156.25,18481.25,46075.25,119401.25,119996.25};
   double MarriedAmountOver[7]={0,1845,10312.50,29387.50,51577.50,111324,129996.50};
   double HeadHouseholdAmountOver[7]={0,1315,6872.5,26722.5,49192.5,115737,125362};
   double MarriedSeparatelyAmountOver[7]={0,922.50,5156.25,14693.75,25788.75,55662.00,64998.25};
    double theRate;
    int index;
    //functions::::
    // who you are ? name and  Status
    void whoFilingTax(){
		
 

  cout<<"Please enter, your full name !\n";
  getline(cin,UserName);
  classPerson.SetFullename(UserName);
  fout.open(UserName+".txt",ios::out);
	  if(!fout){
	  cerr<<"the File "<< UserName<<".txt cannot be open/created.";
	  exit(1);}
fout<<"----------------------------------------------------------------\n";
  fout<<"the USA Basic Federal Tax Formula 2016\n";
  fout<<"the user name  is :"<<UserName;
  cout<<"Filing Status:\n (1)Single,\n (2)Married Filing Jointly OR Qualifying Widow(er) \n";
  cout<<" (3)Married Filing Separately,\n (4)Head of Household,\n";
  cin>>Status;
  classPerson.SetStatus(Status);
   
  fout<<"\nThe status is: "<<Status;
   }// end whoFilingTax;
   // input  tax Credits and penalties
void CreditPenalties(){
   // check credits

    if (classPerson.GetStatus()==1){
    cout<<"\nYour Tax Credits,or 0 : $";
    cin>>TaxCredit;
     }
else {
cout<<"\nhow much credits do your children receive, or 0 ? $";
   cin>>kidscredit;
   fout<<"\nTax Credit for each child is :$"<<kidscredit ;
   TaxCredit=kidscredit*Nbreof_person;

}
// input penalties
 cout<<"\nYour penalties,or 0 : $";
 cin>>penalities;
 // output in file credits and penalties
 fout<<"\nLess Tax credit $"<<TaxCredit;
 fout<<"\nLess Tax payment withholding $"<<TotalTaxwitheld;
 fout<<"\nAdd Penalties $"<<penalities;
 //estimate  the tax return
 theTotal=theRate-TaxCredit-TotalTaxwitheld+penalities;

}
// check the total positive (-)refund (+) tax due  and print the decision with the amount
void PrintResult(){
    if (theTotal<=0){
        cout <<"\nthe total is :$-"<<(-1)*theTotal<<", so it is Refund\n ";
         fout<<"\n**********************************************************";
        fout<<"\nthe total is :$-"<<(-1)*theTotal<<", so it is Refund\n ";
         fout<<"\n**********************************************************";
 }
 else {
    cout<<"\nthe total is :$+"<<theTotal<<" so it is Tax due\n";
     fout<<"\n**********************************************************";
    fout<<"\nthe total is :$+"<<theTotal<<" so it is Tax due\n";
     fout<<"\n**********************************************************";

 }
}
// end print the estimation
// calcul AGI which is Gross Income less Adjustments
double AdjustGrossIncome(){
 cout<<"Please,enter your annual earned Income \n";
double theagi=0;

switch(classPerson.GetStatus()){
     case 1:// single one income
         cout<<"Your Income\n";
         cout<<"Your gross income(ie W2,Wages): $";
         cin>> GrossIncome;
		 classSingle.setWage(GrossIncome);
         fout<<"\nThe wages :$"<<GrossIncome;
         cout<<"Your total Federal withholding: $";
         cin>>Taxwitheld;
		 classSingle.setTaxwitheld(Taxwitheld);
         fout<<"\nYour total Federal withholding :$"<<classSingle.getTaxwitheld();
         cout<<"Your total adjustments, or 0 :$";
         cin>> adjustAmount;
		 classSingle.setadjustAmount(adjustAmount);
         fout<<"\n  Less Adjustment :$"<<classSingle.getadjustAmount();
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
         fout<<"\n**********************************************************";
         fout<<"\nAdjusted Gross Income (AGI); $"<<classSingle.getWage()-classSingle.getadjustAmount();
         fout<<"\n**********************************************************";
         theagi=classSingle.getWage()-classSingle.getadjustAmount();;
        TotalTaxwitheld=classSingle.getTaxwitheld();
         break;
     case 2:// married two income
         cout<<"Your Income";
         cout<<"\nYour wages : $";
         cin>> GrossIncome;
		 classMarriedFilingJointly.setWage(GrossIncome);
         fout<<"\n Gross Income  :$"<<GrossIncome;
         cout<<"\nYour total Federal withholding: $";
         cin>>Taxwitheld;
		 classMarriedFilingJointly.setTaxwitheld(Taxwitheld);
         fout<<"\n Your total Federal withholding: $"<<Taxwitheld;
         cout<<"\nYour total adjustments, or 0 :$";
         cin>> adjustAmount;
		 classMarriedFilingJointly.setadjustAmount(adjustAmount);
         cout<<"Spouse's Income\n";
         cout<<"\nyour spouse's wages :$";
         cin>>GrossIncomespouse;
		 classMarriedFilingJointly.setwagespouse(GrossIncomespouse);
         fout<<"\nSpouse's gross Income  :$"<<GrossIncomespouse;
         cout<<"\nYour spouse's total Federal withholding :$";
         cin>>Taxwitheldspouse;
		 classMarriedFilingJointly.setTaxwitheldspouse(Taxwitheldspouse);
         fout<<"\nYour spouse's total Federal withholding :$"<<Taxwitheldspouse;
         cout<<"\nYour spouse's total adjustments, or 0 :$";
         cin>> adjustAmountspouse;
		 classMarriedFilingJointly.setadjustAmountspouse(adjustAmountspouse);
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
          fout<<"\n**********************************************************";
         fout<<"\nAdjusted Gross Income (AGI) $"<<(classMarriedFilingJointly.getWage()+classMarriedFilingJointly.getwagespouse())-(classMarriedFilingJointly.getadjustAmount()+classMarriedFilingJointly.getadjustAmountspouse());
          fout<<"\n**********************************************************";
         theagi=(classMarriedFilingJointly.getWage()+classMarriedFilingJointly.getwagespouse())-(classMarriedFilingJointly.getadjustAmount()+classMarriedFilingJointly.getadjustAmountspouse());
         TotalTaxwitheld=classMarriedFilingJointly.getTaxwitheld()+classMarriedFilingJointly.getTaxwitheldspouse();
        break;
     case 3:
         cout<<"Your Income";
         cout<<"\nYour wages : $";
         cin>> GrossIncome;
		 classMarriedFilingSeparately.setWage(GrossIncome);
         fout<<"\n Gross Income  :$"<<GrossIncome;
         cout<<"\nYour total Federal withholding: $";
         cin>>Taxwitheld;
		 classMarriedFilingSeparately.setTaxwitheld(Taxwitheld);
         fout<<"\n Your total Federal withholding: $"<<Taxwitheld;
         cout<<"\nYour total adjustments, or 0 :$";
         cin>> adjustAmount;
		 classMarriedFilingSeparately.setadjustAmount(adjustAmount);
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
          fout<<"\n**********************************************************";
         fout<<"\nAdjusted Gross Income (AGI) $"<<classMarriedFilingSeparately.getWage()-classMarriedFilingSeparately.getadjustAmount();
          fout<<"\n**********************************************************";
         theagi=classMarriedFilingSeparately.getWage()-classMarriedFilingSeparately.getadjustAmount();;
         TotalTaxwitheld=classMarriedFilingSeparately.getTaxwitheld();
        break;
     case 4:
          cout<<"Your Income\n";
         cout<<"Your gross income(ie W2,Wages): $";
         cin>> GrossIncome;
		 classHeadofHousehold.setWage(GrossIncome);
         fout<<"\nThe wages :$"<<GrossIncome;
         cout<<"Your total Federal withholding: $";
         cin>>Taxwitheld;
		 classHeadofHousehold.setTaxwitheld(Taxwitheld);
         fout<<"\nYour total Federal withholding :$"<<Taxwitheld;
         cout<<"Your total adjustments, or 0 :$";
         cin>> adjustAmount;
		 classHeadofHousehold.setadjustAmount(adjustAmount);
         fout<<"\n  Less Adjustment :$"<<adjustAmount;
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
         fout<<"\n**********************************************************";
         fout<<"\nAdjusted Gross Income (AGI); $"<<classHeadofHousehold.getWage()-classHeadofHousehold.getadjustAmount();
         fout<<"\n**********************************************************";
         theagi=classHeadofHousehold.getWage()-classHeadofHousehold.getadjustAmount();
        TotalTaxwitheld=classHeadofHousehold.getTaxwitheld();
        break;

}
//fout.close();
 return theagi;

 }

int TaxRateIndex(double amount,double MinArray[],double MaxArray[]){
        int i=0;

          while(true)
        { if((amount>=MinArray[i]) && (amount<=MaxArray[i])) break;
          i++;

        }
        fout<<"\nyour Total Taxtable is between $"<<MinArray[i]<<" and $"<<MaxArray[i];

        return i;
}// end TaxRate

double DeductionExemplecation(){  
/*
MarriedFilingSeparately classMarriedFilingSeparately;
MarriedFilingJointly classMarriedFilingJointly;
HeadofHousehold classHeadofHousehold;
*/
          double TaxIncomeTT=0;
            switch (classPerson.GetStatus()){
        case 1:
            fout<<"\n Less Standard Deduction : $"<<classSingle.getDeduction();
            fout<<"\n Less Personal Exemption : $"<<classSingle.getExcemption();
            TaxIncomeTT=classSingle.getDeduction()+(1*classSingle.getExcemption());
            break;
        case 2:
            cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
			classMarriedFilingJointly.SetNbreKids(Nbreof_person);
            fout<<"\nthe Number of children :"<<classMarriedFilingJointly.GetNbrekids(); 
            fout<<"\n Less Standard Deduction : $"<<classMarriedFilingJointly.getDeduction();
            fout<<"\n Less Personal Exemption : $"<<classMarriedFilingJointly.getExcemption();
             TaxIncomeTT=classMarriedFilingJointly.getDeduction()+((2+classMarriedFilingJointly.GetNbrekids())*classMarriedFilingJointly.getExcemption());
             break;
        case 3:
             cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
			classMarriedFilingSeparately.SetNbreKids(Nbreof_person);
            fout<<"\nthe Number of children :"<<classMarriedFilingSeparately.GetNbrekids();
            fout<<"\n Less Standard Deduction : $"<<classMarriedFilingSeparately.getDeduction();
            fout<<"\n Less Personal Exemption : $"<<classMarriedFilingSeparately.getExcemption();
             TaxIncomeTT=classMarriedFilingSeparately.getDeduction()+((2+classMarriedFilingSeparately.GetNbrekids())*classMarriedFilingSeparately.getExcemption());
            break;

        case 4:
             cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
			classHeadofHousehold.SetNbreKids(Nbreof_person);
            fout<<"\nthe Number of children :"<<classHeadofHousehold.GetNbrekids();
            fout<<"\n Less Standard Deduction : $"<<classHeadofHousehold.getDeduction();
            fout<<"\n Less Personal Exemption : $"<<classHeadofHousehold.getExcemption();
             TaxIncomeTT=classHeadofHousehold.getDeduction()+((2+classHeadofHousehold.GetNbrekids())*classHeadofHousehold.getExcemption());
            break;
         

            }// end switch

            return TaxIncomeTT;
}
   void RateTax(int indexIn,double Amount,double AmountOverArray[],double DiffArray[]){
           if(indexIn==0){
        theRate= AmountOverArray[indexIn]+((Tax_brackets[indexIn]/100)*(Amount-DiffArray[0]));
        fout<<"\n the tax rate %"<<Tax_brackets[indexIn];
        fout<<"\n the over amount $"<<AmountOverArray[indexIn];
         fout<<"\n**********************************************************";
        fout<<"\nTotal Tax :$"<<theRate;
         fout<<"\n**********************************************************";

}// end if
 else{
        theRate= AmountOverArray[indexIn]+((Tax_brackets[indexIn]/100)*(Amount-DiffArray[index-1]));
        fout<<"\n the tax rate %"<<Tax_brackets[indexIn];
        fout<<"\n the over amount $"<<AmountOverArray[indexIn];
         fout<<"\n**********************************************************";
        fout<<"\nTotal Tax :$"<<theRate;
         fout<<"\n**********************************************************";
}// end 00
       }

 void TaxMarried(){
 agi=AdjustGrossIncome();
 TaxtableIncomeTT=agi-DeductionExemplecation();
 fout<<"\n**********************************************************";
 fout<<"\nTaxtable Income $"<<TaxtableIncomeTT;
  fout<<"\n**********************************************************";
 index=TaxRateIndex(TaxtableIncomeTT, MarriedDeductionMinArry,MarriedDeductionMaxArry);
 // check index is it the min or max in the array of between
  cout.setf(ios::fixed|ios::showpoint);
       cout<<setprecision(2);
RateTax(index,TaxtableIncomeTT,MarriedAmountOver, MarriedDeductionMaxArry);
 }


void TaxMarriedSeparately(){
 agi=AdjustGrossIncome();
 TaxtableIncomeTT=agi-DeductionExemplecation();
 fout<<"\n**********************************************************";
 fout<<"\nTaxtable Income $"<<TaxtableIncomeTT;
  fout<<"\n**********************************************************";
 index=TaxRateIndex(TaxtableIncomeTT,MarriedSepratDeductionMinArry,MarriedSepratDeductionMaxArry);
 // check index is it the min or max in the array of between
  cout.setf(ios::fixed|ios::showpoint);
       cout<<setprecision(2);
    RateTax(index,TaxtableIncomeTT,MarriedSeparatelyAmountOver,MarriedSepratDeductionMaxArry);
 }


 void TaxSingle(){
     agi=AdjustGrossIncome();
 TaxtableIncomeTT=agi-DeductionExemplecation();
 fout<<"\n**********************************************************";
 fout<<"\nTaxtable Income $"<<TaxtableIncomeTT;
  fout<<"\n**********************************************************";
 index=TaxRateIndex(TaxtableIncomeTT, singleDeductionMinArry,singleDeductionMaxArry);
 // check index is it the min or max in the array of between
  cout.setf(ios::fixed|ios::showpoint);
       cout<<setprecision(2);
       RateTax(index,TaxtableIncomeTT,SingleAmountOver,singleDeductionMaxArry);
  }

void TaxHeadHouseload(){
    agi=AdjustGrossIncome();
 TaxtableIncomeTT=agi-DeductionExemplecation();
  fout<<"\n**********************************************************";
 fout<<"\nTaxtable Income $"<<TaxtableIncomeTT;
  fout<<"\n**********************************************************";
 index=TaxRateIndex(TaxtableIncomeTT,HeadHouseloadDeductionMinArry,HeadHouseloadDeductionMaxArry);
 // check index is it the min or max in the array of between
  cout.setf(ios::fixed|ios::showpoint);
       cout<<setprecision(2);

       RateTax(index,TaxtableIncomeTT,HeadHouseholdAmountOver,HeadHouseloadDeductionMaxArry);


}




void EstimateTax(){
 switch(Status)
{ case 1:
TaxSingle();
    break;
case 2:
      TaxMarried();
    break;
case 3:
    TaxMarriedSeparately();
    break;
case 4:// head of household
  TaxHeadHouseload();
    break;
default:
    cout<<"To do the federal tax return you have to fit in one of this category";
    break;
}// end switch}

}
int main(){
	 
	
whoFilingTax();
EstimateTax();
CreditPenalties();
PrintResult();
fout.close();
system("pause");

}







 /* cout<<"Cross Income (ie W2) \n";
  cout<<"less Adjustments\n";
  cout<<"----------------------------------------------------------------\n";
  cout<<"Adjusted Gross Income AGI\n\n";
  cout<<"Less:Standard Deduction\n";
  cout<<"Less:Personal Exemption\n";
  cout<<"----------------------------------------------------------------\n";
  cout<<"= Taxable Income\n\n";
  cout<<"multiplied by:tax rate % \n";
  cout<<"----------------------------------------------------------------\n";
  cout<<"Total Tax\n\n";
  cout<<"Less: tax Credits\n";
  cout<<"Less:Tax payments wit-held\n";
  cout<<"Add:Penalties\n";
  cout<<"----------------------------------------------------------------\n";
  cout<<"(-)refund,(+)Tax Due\n";

*/


