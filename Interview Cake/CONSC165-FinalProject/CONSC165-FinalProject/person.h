#ifndef PERSON_H

#define PERSON_H
 
class Person{
    std::string  FullName;
	int Status;
    

public:
	std::string GetFullename()
		{ return  FullName;}
	void SetFullename(std::string thename)
		{
		FullName=thename;
		}
	int  GetStatus(){ return Status; }
	void SetStatus( int status){
		Status=status;
	}
	 
};

#endif