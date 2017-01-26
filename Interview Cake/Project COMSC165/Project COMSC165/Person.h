#ifndef PERSON_H


#define PERSON_H
#include <string>
class Person{
    string  FullName;
	int Status;
     int SecurityNumber;

public:
	void GetFullename()
		{ return FullName;}
	void SetFullename(string thename)
		{
		FullName=thename;
		}
	int  GetStatus(){ return Status; }
	void SetStatus( int status){
		Status=Status;
	}
	void GetSecurityNumber();
	void SetSecurityNumber();
};

#endif