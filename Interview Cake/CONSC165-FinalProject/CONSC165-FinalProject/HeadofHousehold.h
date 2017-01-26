 #ifndef HeadofHousehold_H

#define HeadofHousehold_H
class  HeadofHousehold{
private:
	double Wage;
	double Taxwitheld;
	double adjustAmount;
	int Deduction;
	int Excemption;
 int HeadHouseloadDeductionMinArry[7];//={0,13151,50201,129601,209851,411501,439001};
   int HeadHouseloadDeductionMaxArry[7];//={13150,50200,129600,209850,411500,439000,1000000};
 int   NbreKids;
	public:
		HeadofHousehold(){
		Deduction=9250;
	Excemption=4050; 
	int MinArry[7]={0,13176,50201,129751,210101,412001,439501};
   int MaxArry[7]={13175,50250,129750,210100,412000,439500,10000000}; 
	 for(int i=0; i<7; i++)
	 {HeadHouseloadDeductionMinArry[i]=MinArry[i];
	 HeadHouseloadDeductionMaxArry[i]=MaxArry[i];
	 
	 }
		}
	 int*  GetHeadHouseloadDeductionMinArry(){
	int *ptrarr1=HeadHouseloadDeductionMinArry;
		return ptrarr1; }
	 int * GetHeadHouseloadDeductionMaxArry(){
	int *ptrarr2=HeadHouseloadDeductionMaxArry;
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
	adjustAmount=adjust;}
	double getadjustAmount(){
	return adjustAmount;}
	 
	 

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
	void SetNbreKids(int nbrekids){
		NbreKids=nbrekids;
	}
	int GetNbrekids( ){
	return NbreKids;
	
	} 
};
#endif  