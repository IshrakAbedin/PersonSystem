#include "Profile.h"
#include <string.h>
#include <iostream>

Profile::Profile() : Student(), Employee(), Patient()
{
}

Profile::~Profile()
{
}


void Profile::Set_Person_ID(int _Person_ID)
{
	Person_ID = _Person_ID;
}

void Profile::Set_First_Name(char *_First_Name)
{
	strcpy_s(First_Name, _First_Name);
}

void Profile::Set_Last_Name(char *_Last_Name)
{
	strcpy_s(Last_Name, _Last_Name);
}

void Profile::Set_DoB(int _DoB)
{
	DoB = _DoB;
}

void Profile::Set_StudentID(int _Student_ID)
{
	Student_ID = _Student_ID;
}

void Profile::Set_Department(char *_Department)
{
	strcpy_s(Department, _Department);
}

void Profile::Set_Current_Semester(int _Current_Semester)
{
	Current_Semester = _Current_Semester;
}

void Profile::Set_CGPA(float _CGPA)
{
	CGPA = _CGPA;
}

void Profile::Set_Employee_ID(int _Employee_ID)
{
	Employee_ID = _Employee_ID;
}

void Profile::Set_Organization(char* _Organization)
{
	strcpy_s(Organization, _Organization);
}

void Profile::Set_Salary(int _Salary)
{
	Salary = _Salary;
}

void Profile::Set_Join_Date(int _Join_Date)
{
	Join_Date = _Join_Date;
}

void Profile::Set_Patient_ID(int _Patient_ID)
{
	Patient_ID = _Patient_ID;
}

void Profile::Set_Hospital_Name(char *_Hospital_Name)
{
	strcpy_s(Hospital_Name, _Hospital_Name);
}

void Profile::Set_Test_Result(float _Test_Result)
{
	Test_Result = _Test_Result;
}

void Profile::Set_Diagnosis(char *_Diagnosis)
{
	strcpy_s(Diagnosis, _Diagnosis);
}


int Profile::Get_Person_ID()
{
	return Person_ID;
}

char* Profile::Get_First_Name()
{
	return First_Name;
}

char* Profile::Get_Last_Name()
{
	return Last_Name;
}

int Profile::Get_DoB()
{
	return DoB;
}

int Profile::Get_Student_ID()
{
	return Student_ID;
}

char * Profile::Get_Department()
{
	return Department;
}

int Profile::Get_Current_Semester()
{
	return Current_Semester;
}

float  Profile::Get_CGPA()
{
	return CGPA;
}

int Profile::Get_Employee_ID()
{
	return CGPA;
}

char* Profile::Get_Organization()
{
	return Organization;
}

int Profile::Get_Salary()
{
	return Salary;
}

int Profile::Get_Join_Date()
{
	return Join_Date;
}

int Profile::Get_Patient_ID()
{
	return Patient_ID;
}

char* Profile::Get_Hospital_Name()
{
	return Hospital_Name;
}

float Profile::Get_Test_Result()
{
	return Test_Result;
}

char* Profile::Get_Diagnosis()
{
	return Diagnosis;
}



void Profile::Print_User_ID()
{
	std::cout << Person_ID << "-" << Student_ID << "-" << Employee_ID << "-" << Patient_ID << std::endl;
}