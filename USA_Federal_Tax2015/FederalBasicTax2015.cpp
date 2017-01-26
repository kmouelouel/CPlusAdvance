#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// global declaration variables::
 string UserName="";
 ofstream fout;
 double  personal_exemption_amount=4000;
    int Status=0, Nbreof_person=0, index=0;
 double  stndardDeduction[4]={6300,12600,6300,9250};
 double TaxtableIncomeTT=0,agi=0,TaxCredit,penalities,theTotal,kidscredit;
  double GrossIncome=0,adjustAmountspouse=0,GrossIncomespouse=0,adjustAmount=0,Taxwitheldspouse,Taxwitheld=0,TotalTaxwitheld=0;
 // standard deduction
   double singleDeductionMinArry[7]={0,9226,37451,90751,189301,411501,413201};
   double singleDeductionMaxArry[7]={9225,37450,90750,189300,411500,413200,1000000};
   double MarriedDeductionMinArry[7]={0,18451,74901,151201,230451,411501,464851};
   double MarriedDeductionMaxArry[7]={18450,74900,151200,230450,411500,464850,1000000};
   double MarriedSepratDeductionMinArry[7]={0,9226,37451,75601,115226,205751,232426};
   double MarriedSepratDeductionMaxArry[7]={9225,37450,75600,115225,205750,232425,1000000};
   double HeadHouseloadDeductionMinArry[7]={0,13151,50201,129601,209851,411501,439001};
   double HeadHouseloadDeductionMaxArry[7]={13150,50200,129600,209850,411500,439000,1000000};
   float Tax_brackets[7]={10,15,25,28,33,35,39.6};
   double SingleAmountOver[7]={0,922.50,5156.25,18481.25,46075.25,119401.25,119996.25};
   double MarriedAmountOver[7]={0,1845,10312.50,29387.50,51577.50,111324,129996.50};
   double HeadHouseholdAmountOver[7]={0,1315,6872.5,26722.5,49192.5,115737,125362};
   double MarriedSeparatelyAmountOver[7]={0,922.50,5156.25,14693.75,25788.75,55662.00,64998.25};
    double theRate;

    //functions::::
    // who you are ? name and  Status
void whoFilingTax(){
        fout<<"----------------------------------------------------------------\n";
        fout<<"the USA Basic Federal Tax Formula 2015\n";
        fout<<"----------------------------------------------------------------\n";
        cout<<"Please enter, your full name !\n";
        cin>>UserName;
        fout<<"the user name  is :"<<UserName;
        cout<<"Filing Status:\n (1)Single,\n (2)Married Filing Jointly OR Qualifying Widow(er) \n";
       cout<<" (3)Married Filing Separately,\n (4)Head of Household,\n";
       cin>>Status;
       fout<<"\nThe status is: "<<Status;
   }// end whoFilingTax;
   // input  tax Credits and penalties
void CreditPenalties(){
   // check credits
    if (Status==1){
    cout<<"\nEnter your Tax Credits,or 0 : $";
    cin>>TaxCredit;
     }
else {
   cout<<"\nhow much credits do your children receive, or 0 ? $";
   cin>>kidscredit;
   cout<<"\nEnter your Tax Credits,or 0 : $";
    cin>>TaxCredit;
   fout<<"\nTax Credit for each child is :$"<<kidscredit ;
    TaxCredit=TaxCredit+(kidscredit*Nbreof_person);
  }
// input penalties
 cout<<"\nYour penalties,or 0 : $";
 cin>>penalities;
 // output in file credits and penalties
 fout<<"\nLess  Tax credit $"<<TaxCredit;
 fout<<"\nLess Tax payment withholding $"<<TotalTaxwitheld;
 fout<<"\nAdd Penalties $"<<penalities;
 //estimate  the tax return
 theTotal=theRate-TaxCredit-TotalTaxwitheld+penalities;

}
// check the total positive (-)refund (+) tax due  and print the decision with the amount
void PrintResult(){
    if (theTotal<=0){
            cout <<"\nIt is a Refund of $"<<(-1)*theTotal<<" because the total is :$"<<theTotal;
            fout<<"\n**********************************************************";
            fout<<"\nIt is a Refund of $"<<(-1)*theTotal<<" because the total is :$"<<theTotal;
            fout<<"\n**********************************************************";
 }
 else {
            cout<<"\nIt is a TAx due of $"<<theTotal<<" because the total is :$"<<theTotal;
            fout<<"\n**********************************************************";
            fout<<"\nIt is a TAx due of $"<<theTotal<<" because the total is :$"<<theTotal;
            fout<<"\n**********************************************************";

 }
}// end print the estimation

// calcul AGI which is Gross Income less Adjustments
double AdjustGrossIncome(){
 cout<<"Please,enter your annual earned Income \n";
double theagi=0;
 switch(Status){
     case 1:// single one income
         cout<<"Your Income\n";
         cout<<"Your gross income(ie W2): $";
         cin>> GrossIncome;
         fout<<"\nYour gross income(ie W2):$"<<GrossIncome;
         cout<<"Your total Federal withholding: $";
         cin>>Taxwitheld;
         fout<<"\nYour total Federal withholding :$"<<Taxwitheld;
         cout<<"Your total adjustments, or 0 :$";
         cin>> adjustAmount;
         fout<<"\nLess Adjustment :$"<<adjustAmount;
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
         fout<<"\n**********************************************************";
         fout<<"\nAdjusted Gross Income (AGI); $"<<GrossIncome-adjustAmount;
         fout<<"\n**********************************************************";
         theagi=GrossIncome-adjustAmount;
        TotalTaxwitheld=Taxwitheld;
         break;
     case 2:// married two income
         cout<<"Your Income";
         cout<<"\nYour wages : $";
         cin>> GrossIncome;
         fout<<"\nYour gross income(ie W2):$"<<GrossIncome;
         cout<<"\nYour total Federal withholding: $";
         cin>>Taxwitheld;
         fout<<"\n Your total Federal withholding: $"<<Taxwitheld;
         cout<<"\nYour total adjustments, or 0 :$";
         cin>> adjustAmount;
         cout<<"Spouse's Income\n";
         cout<<"\nYour spouse's wages :$";
         cin>>GrossIncomespouse;
         fout<<"\nSpouse's gross Income  :$"<<GrossIncomespouse;
         cout<<"\nYour spouse's total Federal withholding :$";
         cin>>Taxwitheldspouse;
         fout<<"\nYour spouse's total Federal withholding :$"<<Taxwitheldspouse;
         cout<<"\nYour spouse's total adjustments, or 0 :$";
         cin>> adjustAmountspouse;
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
          fout<<"\n**********************************************************";
         fout<<"\nAdjusted Gross Income (AGI) $"<<(GrossIncome+GrossIncomespouse)-(adjustAmount+adjustAmountspouse);
          fout<<"\n**********************************************************";
         theagi=(GrossIncome+GrossIncomespouse)-(adjustAmount+adjustAmountspouse);
         TotalTaxwitheld=Taxwitheld+Taxwitheldspouse;
        break;
     case 3:
         cout<<"Your Income";
         cout<<"\nYour gross income(ie W2): $";
         cin>> GrossIncome;
         fout<<"\nYour gross income(ie W2):$"<<GrossIncome;
         cout<<"\nYour total Federal withholding: $";
         cin>>Taxwitheld;
         fout<<"\n Your total Federal withholding: $"<<Taxwitheld;
         cout<<"\nYour total adjustments, or 0 :$";
         cin>> adjustAmount;
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
          fout<<"\n**********************************************************";
         fout<<"\nAdjusted Gross Income (AGI) $"<<(GrossIncome)-(adjustAmount);
          fout<<"\n**********************************************************";
         theagi=(GrossIncome)-(adjustAmount);
         TotalTaxwitheld=Taxwitheld;
        break;
     case 4:
          cout<<"Your Income\n";
         cout<<"Your gross income(ie W2,Wages): $";
         cin>> GrossIncome;
         fout<<"\nThe wages :$"<<GrossIncome;
         cout<<"Your total Federal withholding: $";
         cin>>Taxwitheld;
         fout<<"\nYour total Federal withholding :$"<<Taxwitheld;
         cout<<"Your total adjustments, or 0 :$";
         cin>> adjustAmount;
         fout<<"\n  Less Adjustment :$"<<adjustAmount;
         cout.setf(ios::fixed|ios::showpoint);
         cout<<setprecision(2);
         fout<<"\n**********************************************************";
         fout<<"\nAdjusted Gross Income (AGI); $"<<GrossIncome-adjustAmount;
         fout<<"\n**********************************************************";
         theagi=GrossIncome-adjustAmount;
        TotalTaxwitheld=Taxwitheld;
        break;

}
//fout.close();
 return theagi;

 }
// find the index where the amount is between range minvalue and Maxvalue
int TaxRateIndex(double amount,double MinArray[],double MaxArray[]){
        int i=0;
          while(true)
        { if((amount>=MinArray[i]) && (amount<=MaxArray[i])) break;
          i++;

        }
        fout<<"\nYour Taxtable Income is between $"<<MinArray[i]<<" and $"<<MaxArray[i];

        return i;
}// end TaxRate

double DeductionExemption(){

          double TaxIncomeTT=0;
            switch (Status){
        case 1:
            fout<<"\n Less Standard Deduction : $"<<stndardDeduction[0];
            fout<<"\n Less Personal Exemption : $"<<personal_exemption_amount;
            TaxIncomeTT=stndardDeduction[0]+(1*personal_exemption_amount);
            break;
        case 2:
            cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
            fout<<"\nthe Number of children :"<<Nbreof_person;
            fout<<"\n Less Standard Deduction : $"<<stndardDeduction[1];
            fout<<"\n Less Personal Exemption : $"<<personal_exemption_amount;
             TaxIncomeTT=stndardDeduction[1]+((2+Nbreof_person)*personal_exemption_amount);
             break;
        case 3:
             cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
            fout<<"\nthe Number of children :"<<Nbreof_person;
            fout<<"\n Less Standard Deduction : $"<<stndardDeduction[2];
            fout<<"\n Less Personal Exemption : $"<<personal_exemption_amount;
             TaxIncomeTT=stndardDeduction[2]+((2+Nbreof_person)*personal_exemption_amount);
            break;

        case 4:
             cout<<"\nhow many children do you have, or 0 ?";
            cin>>Nbreof_person;
            fout<<"\nthe Number of children :"<<Nbreof_person;
            fout<<"\n Less Standard Deduction : $"<<stndardDeduction[3];
            fout<<"\n Less Personal Exemption : $"<<personal_exemption_amount;
             TaxIncomeTT=stndardDeduction[3]+((2+Nbreof_person)*personal_exemption_amount);
            break;
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

 void AGI_DedeuctionExemption_TatxtableIncome(){
 agi=AdjustGrossIncome();
 TaxtableIncomeTT=agi-DeductionExemption();
 fout<<"\n**********************************************************";
 fout<<"\nTaxtable Income $"<<TaxtableIncomeTT;
  fout<<"\n**********************************************************";
 }

 void TaxMarried(){
 AGI_DedeuctionExemption_TatxtableIncome();
 index=TaxRateIndex(TaxtableIncomeTT,MarriedDeductionMinArry,MarriedDeductionMaxArry);
 // check index is it the min or max in the array of between
  cout.setf(ios::fixed|ios::showpoint);
       cout<<setprecision(2);
RateTax(index,TaxtableIncomeTT,MarriedAmountOver,MarriedDeductionMaxArry);
 }


void TaxMarriedSeparately(){
 AGI_DedeuctionExemption_TatxtableIncome();
 index=TaxRateIndex(TaxtableIncomeTT,MarriedSepratDeductionMinArry,MarriedSepratDeductionMaxArry);
 // check index is it the min or max in the array of between
  cout.setf(ios::fixed|ios::showpoint);
       cout<<setprecision(2);
    RateTax(index,TaxtableIncomeTT,MarriedSeparatelyAmountOver,MarriedSepratDeductionMaxArry);
 }


 void TaxSingle(){
     AGI_DedeuctionExemption_TatxtableIncome();
     index=TaxRateIndex(TaxtableIncomeTT,singleDeductionMinArry,singleDeductionMaxArry);
     // check index is it the min or max in the array of between
      cout.setf(ios::fixed|ios::showpoint);
      cout<<setprecision(2);
      RateTax(index,TaxtableIncomeTT,SingleAmountOver,singleDeductionMaxArry);
  }

void TaxHeadHouseload(){

    AGI_DedeuctionExemption_TatxtableIncome();
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
int main()
{
fout.open("data.txt");
if(!fout.good()) throw "I/O error";
whoFilingTax();
EstimateTax();
CreditPenalties();
PrintResult();
fout.close();
}// end main






