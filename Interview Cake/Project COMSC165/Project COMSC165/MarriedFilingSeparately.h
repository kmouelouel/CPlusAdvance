
#ifndef Married_Filing_Separately_H

#define Married_Filing_Separately_H

class MarriedFilingSeparately{
private:
	double Wage;
	double Taxwitheld;
	double adjustAmount;
	 int Deduction;
	  int Excemption;
	  int  MarriedSepratDeductionMinArry[7];//={0,9226,37451,75601,115226,205751,232426};
       int  MarriedSepratDeductionMaxArry[7];//={9225,37450,75600,115225,205750,232425,1000000};
	   int NbreKids;
	public:

		MarriedFilingSeparately(){
		 Deduction=6300;
	    Excemption=4050; 
	   int MinArry[7]={0,9226,37451,75601,115226,205751,232426};
        int MaxArry[7]={9225,37450,75600,115225,205750,232425,1000000};
	    for(int i=0; i<7; i++)
	 { 
		 MarriedSepratDeductionMinArry[i]=MinArry[i];
	     MarriedSepratDeductionMaxArry[i]=MaxArry[i];
		}
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
	void setTaxwitheld(double TaxW){
	Taxwitheld=TaxW;}
	double getTaxwitheld(){
	return Taxwitheld;}
	void setadjustAmount(double adjust){
	adjustAmount=adjust;
	}
	double getadjustAmount(){
	return adjustAmount;
	}
	double getAdjoustedGrossIncome(){
	      return (Wage-adjustAmount);
	}
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

void SetNbreKids(int nbrekids){
		NbreKids=nbrekids;
	}
	int GetNbrekids(){
	return NbreKids;
	
	} 

};

#endif
