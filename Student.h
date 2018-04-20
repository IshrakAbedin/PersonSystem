#pragma once
#include "Person.h"
class Student: virtual protected Person 
{
protected:
	int Student_ID;
	char Department[4];
	int Current_Semester;
	float CGPA;
public:
	Student();
	~Student();
};

