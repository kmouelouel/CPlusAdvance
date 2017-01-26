//#include <fstream>
//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//// global declaration variables and functions ::
// string UserName;
// ofstream fout;
// double  personal_exemption_amount=3950;
//    int Status=0, Nbreof_person=0;
// double  stndardDeduction[5]={6200,12600,6300,9250,12600};
// double TaxtableIncomeTT=0,agi=0,TaxCredit,penalities,theTotal;
//  double GrossIncome=0,adjustAmountspouse=0,GrossIncomespouse=0,adjustAmount=0,Taxwitheldspouse,Taxwitheld=0,TotalTaxwitheld=0;
// // standard deduction
//   double singleDeductionMinArry[7]={0,9075,36900,89350,186350,405100,408750};
//   double singleDeductionMaxArry[7]={9075,36900,89350,186350,405100,405750,500000};
//   double MarriedDeductionMinArry[7]={0,18451,74901,151201,230451,411501,464851};
//   double MarriedDeductionMaxArry[7]={18450,74900,151200,230450,411500,464850,500000};
//   double MarriedSepratDeductionMaxArry[7]={};
//   double MarriedSepratDeductionMinArry[7]={};
//   double HeadHouseloadDeductionMaxArry[7]={};
//   double HeadHouseloadDeductionMinArry[7]={};
//
//   float Tax_brackets[7]={0.10,0.15,0.25,0.28,0.33,0.35,0.396};
//    double SingleAmountOver[7]={0,922.50,5156.25,18481.25,46075.25,119401.25,119996.25};
//     double MarriedAmountOver[7]={0,1845,10312.50,29387.50,51577.50,111324,129996.50};
//   // personal Exemption
//double theRate;
//    int index;
//
//double AdjustGrossIncome(int statusin){
// //fout.open("data.txt",ios::app);
//     cout<<"Please,enter your annual earned Income \n";
//double theagi=0;
// switch(statusin){
//     case 1:
//         cout<<"Your Income\n";
//         cout<<"your gross income(ie W2,Wages): $";
//         cin>> GrossIncome;
//         fout<<"\n the wages :$"<<GrossIncome;
//         cout<<" your total Federal withholding: $";
//         cin>>Taxwitheld;
//         fout<<"\n your total Federal withholding :$"<<Taxwitheld;
//         cout<<"your total adjustments, or 0 :$";
//         cin>> adjustAmount;
//         fout<<"\n Less Adjustment :$"<<adjustAmount;
//         cout.setf(ios::fixed|ios::showpoint);
//         cout<<setprecision(2);
//         fout<<"\n Adjusted Gross Income (AGI) $"<<GrossIncome-adjustAmount;
//         theagi=GrossIncome-adjustAmount;
//        TotalTaxwitheld=Taxwitheld;
//         break;
//     case 2:
//         cout<<"Your Income";
//         cout<<"\nyour wages : $";
//         cin>> GrossIncome;
//         fout<<"\n Gross Income  :$"<<GrossIncome;
//         cout<<"\nYour total Federal withholding: $";
//         cin>>Taxwitheld;
//         fout<<"\n Your total Federal withholding: $"<<Taxwitheld;
//         cout<<"\nYour total adjustments, or 0 :$";
//         cin>> adjustAmount;
//         cout<<"Spouse's Income\n";
//         cout<<"\nyour spouse's wages :$";
//         cin>>GrossIncomespouse;
//         fout<<"\nSpouse's gross Income  :$"<<GrossIncomespouse;
//         cout<<"\nYour spouse's total Federal withholding :$";
//         cin>>Taxwitheldspouse;
//         fout<<"\nYour spouse's total Federal withholding :$"<<Taxwitheldspouse;
//         cout<<"\nYour spouse's total adjustments, or 0 :$";
//         cin>> adjustAmountspouse;
//         cout.setf(ios::fixed|ios::showpoint);
//         cout<<setprecision(2);
//         fout<<"\nAdjusted Gross Income (AGI) $"<<(GrossIncome+GrossIncomespouse)-(adjustAmount+adjustAmountspouse);
//         theagi=(GrossIncome+GrossIncomespouse)-(adjustAmount+adjustAmountspouse);
//         TotalTaxwitheld=Taxwitheld+Taxwitheldspouse;
//        break;
//}
////fout.close();
// return theagi;
//
// }
//
//double DeductionExemplecation(int statusIn){
//    // find  the standard deduction related to status
//   // fout.open("data.txt",ios::app);
//          double TaxIncomeTT=0;
//            switch (statusIn){
//        case 1:
//            fout<<"\n Less Standard Deduction : $"<<stndardDeduction[0];
//            fout<<"\n Less Personal Exemption : $"<<personal_exemption_amount;
//            TaxIncomeTT=stndardDeduction[0]+(1*personal_exemption_amount);
//            break;
//        case 2:
//            cout<<"\nhow many children do you have, or 0 ?";
//            cin>>Nbreof_person;
//            fout<<"\nthe Number of children :"<<Nbreof_person;
//            fout<<"\n Less Standard Deduction : $"<<stndardDeduction[1];
//            fout<<"\n Less Personal Exemption : $"<<personal_exemption_amount;
//             TaxIncomeTT=stndardDeduction[1]+((2+Nbreof_person)*personal_exemption_amount);
//             break;
//        case 3:
//             cout<<"\nhow many children do you have, or 0 ?";
//            cin>>Nbreof_person;
//            fout<<"\nthe Number of children :"<<Nbreof_person;
//            fout<<"\n Less Standard Deduction : $"<<stndardDeduction[2];
//            fout<<"\n Less Personal Exemption : $"<<personal_exemption_amount;
//             TaxIncomeTT=stndardDeduction[2]+((2+Nbreof_person)*personal_exemption_amount);
//            break;
//            break;
//        case 4:
//            break;
//        case 5:
//            break;
//            }// end switch
//          // fout.c();
//            return TaxIncomeTT;
//}
//int TaxRate(double amount,double MinArray[],double MaxArray[]){
//        int i=0;
//
//        fout<<"\nyour Taxtable Income is :$"<<amount;
//          while(true)
//        { if((amount>=MinArray[i]) && (amount<=MaxArray[i])) break;
//          i++;
//
//        }
//        fout<<"\nyour Total Taxtable is between 4"<<MinArray[i]<<" and 4"<<MaxArray[i];
//
//        return i;
//}// end TaxRate
//int main()
//{
//fout.open("data.txt");
//if(!fout.good()) throw "I/O error";
//
//  cout<<"----------------------------------------------------------------\n";
//  cout<<"Please enter, your full name !\n";
//  cin>>UserName;
//  fout<<"the user is :"<<UserName;
//  cout<<"Filing Status:\n (1)Single,\n (2)Married Filing Jointly\n";
//  cout<<" (3)Married Filing Separately,\n (4)Head of Household,\n (5)Qualifying Widow(er) \n";
//  cin>>Status;
//  fout<<"\nthe status is: "<<Status;
// // fout.close();
//  switch(Status)
//{ case 1:
// agi=AdjustGrossIncome(Status);
// TaxtableIncomeTT=agi-DeductionExemplecation(Status);
//
// fout<<"\nTaxtable Income $"<<TaxtableIncomeTT;
// index=TaxRate(TaxtableIncomeTT,singleDeductionMinArry,singleDeductionMaxArry);
// // check index is it the min or max in the array of between
//  cout.setf(ios::fixed|ios::showpoint);
//       cout<<setprecision(2);
// if(index==0){
//        fout<<"\nthe tax rate %"<<Tax_brackets[index];
//        fout<<"\nthe over amount $"<<SingleAmountOver[index];
//        fout<<"\nYour Total Tax :$"<<theRate;
//
//       theRate= SingleAmountOver[index]+(Tax_brackets[index]*(TaxtableIncomeTT-singleDeductionMaxArry[0]));
//
//}// end if
// else{
//        fout<<"\nthe tax rate %"<<Tax_brackets[index];
//        fout<<"\nthe over amount $"<<SingleAmountOver[index];
//        fout<<"\nYour Total Tax :$"<<theRate;
//
//       theRate= SingleAmountOver[index]+(Tax_brackets[index]*(TaxtableIncomeTT-singleDeductionMaxArry[index-1]));
//
//}// end if
//
//    break;
//        theRate= MarriedAmountOver[index]+(Tax_brackets[index]*(TaxtableIncomeTT-MarriedDeductionMaxArry[0]));
//        fout<<"\n the tax rate %"<<Tax_brackets[index];
//        fout<<"\n the over amount $"<<MarriedAmountOver[index];
//        fout<<"\nTotal Tax :$"<<theRate;
//
//        cout<<"\n the tax rate %"<<(Tax_brackets[index])*100;
//        cout<<"\nTotal Tax :$"<<theRate;
//        cout<<"\n the over amount $"<<MarriedAmountOver[index];
//}// end if
// else{
//        fout<<"kahina index2 case 2";
//        fout<<"\nTaxtable Income $"<<TaxtableIncomeTT;
//        theRate= MarriedAmountOver[index]+(Tax_brackets[index]*(TaxtableIncomeTT-MarriedDeductionMaxArry[index-1]));
//        fout<<"\n the tax rate %"<<Tax_brackets[index];
//        fout<<"\n the over amount $"<<MarriedAmountOver[index];
//        fout<<"\nTotal Tax :$"<<theRate;
//        cout<<"\n the tax rate %"<<(Tax_brackets[index])*100;
//        cout<<"\nTotal Tax :$"<<theRate;
//        cout<<"\n the over amount $"<<MarriedAmountOver[index];
//}// end 00
//
//
//    break;
//case 3:
//
//    break;
//case 4:
//
//    break;
//case 5:
//    break;
//
//default:
//    cout<<"To do the federal tax return you have to fit in one of this category";
//    break;
//}// end switch
// cout<<"\nyour Tax Credits,or 0 : $";
// cin>>TaxCredit;
// cout<<"\nyour penalties,or 0 : $";
// cin>>penalities;
// fout<<"\nLess Tax credit $"<<TaxCredit;
// fout<<"\nLess Tax payment withholding "<<TotalTaxwitheld;
// theTotal=theRate-TaxCredit-TotalTaxwitheld+penalities;
// if (theTotal<=0){
//        cout <<"Refund for the amoumt of $"<<(-1)*theTotal;
//        fout<<"Refund for the amoumt of $"<<(-1)*theTotal;
// }
// else {
//    cout<<" Tax due for the amount of $"<<theTotal;
//    fout<<" Tax due for the amount of $"<<theTotal;
//
// }
//
//fout.close();
//}// end main function
//
//
//
//
//
//
//
//
//
//
//
// /* cout<<"Cross Income (ie W2) \n";
//  cout<<"less Adjustments\n";
//  cout<<"----------------------------------------------------------------\n";
//  cout<<"Adjusted Gross Income AGI\n\n";
//  cout<<"Less:Standard Deduction\n";
//  cout<<"Less:Personal Exemption\n";
//  cout<<"----------------------------------------------------------------\n";
//  cout<<"= Taxable Income\n\n";
//  cout<<"multiplied by:tax rate % \n";
//  cout<<"----------------------------------------------------------------\n";
//  cout<<"Total Tax\n\n";
//  cout<<"Less: tax Credits\n";
//  cout<<"Less:Tax payments wit-held\n";
//  cout<<"Add:Penalties\n";
//  cout<<"----------------------------------------------------------------\n";
//  cout<<"(-)refund,(+)Tax Due\n";
//
//*/
//
//
