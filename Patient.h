#pragma once
#include "Person.h"
class Patient: virtual protected Person
{
protected:
	int Patient_ID;
	char Hospital_Name[100];
	float Test_Result;
	char Diagnosis[200];
public:
	Patient();
	~Patient();
};

