#pragma once
#include "Person.h"
class Employee: virtual protected Person
{
protected:
	int Employee_ID;
	char Organization[31];
	int Salary;
	int Join_Date;
public:
	Employee();
	~Employee();
};

