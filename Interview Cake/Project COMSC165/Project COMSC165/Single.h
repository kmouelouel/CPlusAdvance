 
 
#ifndef SINGLE_H

#define SINGLE_H

#include <iostream>
#include <cstdlib>
//template <typename dataType>
class single{
	
	double Wage;
	double Taxwitheld;
	double adjustAmount;
	int Deduction;
	int Excemption;
	double AGI; 
	int singleDeductionMinArry[7];
	int singleDeductionMaxArry[7];
	// declaration of constructor
	
public:
	
 
 single(){
	Deduction=6300;
	Excemption=4050; 
	int MinArry[7]={0,9226,37451,90751,189301,411501,413201};
   int MaxArry[7]={9225,37450,90750,189300,411500,413200,1000000};
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
	double AdjoustedGrossIncome(){
	      return (Wage-adjustAmount);
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