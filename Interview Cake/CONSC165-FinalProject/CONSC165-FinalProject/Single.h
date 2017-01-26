#ifndef SINGLE_H

#define SINGLE_H

 
//template <typename dataType>
class single{
	
	double Wage;
	double Taxwitheld;
	double adjustAmount;
	int Deduction;
	int Excemption;
 
	int singleDeductionMinArry[7];
	int singleDeductionMaxArry[7];
	// declaration of constructor
	
public:
	
 
 single(){
	Deduction=6300;
	Excemption=4050; 
	int MinArry[7]={0,9251,37501,90851,189501,412001,413650};;
   int MaxArry[7]={9250,37500,90850,189500,412000,413650,10000000};
     for(int i=0; i<7; i++)
	 {singleDeductionMinArry[i]=MinArry[i];
	 singleDeductionMaxArry[i]=MaxArry[i];
	 
	 }
	}
	void setWage(double w){
	Wage=w;}
	double getWage(){
	return Wage;}
	 
	
	void setTaxwitheld(double TaxW){
	Taxwitheld=TaxW;}
	double getTaxwitheld(){
	return Taxwitheld;}

	void setadjustAmount(double adjust){
	adjustAmount=adjust;}
	double getadjustAmount(){
	return adjustAmount;}
	void setDeduction(int D){
	Deduction=D;
	}
	int getDeduction(){
	return Deduction; }
	void setExcemption(int E){
	Excemption=E;
	}
	int getExcemption(){
	return Excemption;
	}
	 
	  
	int*  GetsingleDeductionMinArry(){
	int *ptrarr1=singleDeductionMinArry;
		return ptrarr1; }
	 int * GetsingleDeductionMaxArry(){
	int *ptrarr2=singleDeductionMaxArry;
		return ptrarr2; 
		}
	 
};
#endif