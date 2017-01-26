#ifndef Married_Filing_Jointly_H

#define Married_Filing_Jointly_H
class MarriedFilingJointly{
	double Wage;
	double Taxwitheld;
	double adjustAmount;
	double wagespouse;
	double Taxwitheldspouse;
	double adjustAmountspouse;

	int Deduction;
	int Excemption;
int MarriedDeductionMinArry[7];//={0,18451,74901,151201,230451,411501,464851};
   int  MarriedDeductionMaxArry[7];//={18450,74900,151200,230450,411500,464850,1000000};
	int NbreKids;
public:	
	
	MarriedFilingJointly(){
		Deduction=12600;
	Excemption=4050; 
	int MinArry[7]={0,18476,74976,151376,230701,412001,465355};
   int MaxArry[7]={18475,74975,151375,230700,412000,465350,10000000}; 
	 for(int i=0; i<7; i++)
	 {MarriedDeductionMinArry[i]=MinArry[i];
	 MarriedDeductionMaxArry[i]=MaxArry[i];
	 
	 }
	}

	void SetNbreKids(int nbrekids){
		NbreKids=nbrekids;
	}
	int GetNbrekids(){
	return NbreKids;
	
	}
	 int*  GetMarriedDeductionMinArry(){
	int *ptrarr1=MarriedDeductionMinArry;
		return ptrarr1; }
	 int * GetMarriedDeductionMaxArry(){
	int *ptrarr2=MarriedDeductionMaxArry;
		return ptrarr2; 
		}
	void setWage(double w){
	Wage=w;}
	double getWage(){
	return Wage;}
	void setDeduction(int D){
	Deduction=D;}
	double getDeduction(){
	return Deduction;}
	void setExcemption(int E){
	Excemption=E;
	}
	int getExcemption(){
	return Excemption;
	}
	void setwagespouse(double w){
	wagespouse=w;}
	double getwagespouse(){
	return wagespouse;}
	void setTaxwitheld(double TaxW){
	Taxwitheld=TaxW;}
	double getTaxwitheld(){
	return Taxwitheld;}
	void setTaxwitheldspouse(double TaxW){
	Taxwitheldspouse=TaxW;}
	double getTaxwitheldspouse(){
	return Taxwitheldspouse;}
	void setadjustAmount(double adjust){
	adjustAmount=adjust;}
	double getadjustAmount(){
	return adjustAmount;}
	void setadjustAmountspouse(double adjust){
	adjustAmountspouse=adjust;}
	double getadjustAmountspouse(){
	return adjustAmountspouse;}
   

   
   
};

#endif 