#ifndef MarriedFilingSeparately_H

#define MarriedFilingSeparately_H
class MarriedFilingSeparately{
	double Wage;
	double Taxwitheld;
	double adjustAmount;
 	int Deduction;
	int Excemption;
int MarriedSepratDeductionMinArry[7];//={0,18451,74901,151201,230451,411501,464851};
   int  MarriedSepratDeductionMaxArry[7];//={18450,74900,151200,230450,411500,464850,1000000};
	int NbreKids;
public:	
	
	MarriedFilingSeparately(){
		Deduction=12600;
	Excemption=4050; 
	int MinArry[7]={0,9251,37501,75701,115351,206001,232676};
   int MaxArry[7]={9250,37500,75700,115350,206000,232675,10000000}; 
	 for(int i=0; i<7; i++)
	 {MarriedSepratDeductionMinArry[i]=MinArry[i];
	 MarriedSepratDeductionMaxArry[i]=MaxArry[i];
	 
	 }
	}

	void SetNbreKids(int nbrekids){
		NbreKids=nbrekids;
	}
	int GetNbrekids(){
	return NbreKids;
	
	}
	 int*  GetMarriedSepratDeductionMinArry(){
	int *ptrarr1=MarriedSepratDeductionMinArry;
		return ptrarr1; }
	 int * GetMarriedSepratDeductionMaxArry(){
	int *ptrarr2=MarriedSepratDeductionMaxArry;
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
	 
	void setTaxwitheld(double TaxW){
	Taxwitheld=TaxW;}
	double getTaxwitheld(){
	return Taxwitheld;}
	 
	void setadjustAmount(double adjust){
	adjustAmount=adjust;}
	double getadjustAmount(){
	return adjustAmount;}
	 
   

   
   
};

#endif 