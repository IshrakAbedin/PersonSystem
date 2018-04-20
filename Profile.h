#pragma once
#include "Employee.h";
#include "Patient.h";
#include "Student.h";
class Profile: private Student, private Employee, private Patient
{
public:
	Profile();
	~Profile();

	void Set_Person_ID(int _Person_ID);
	void Set_First_Name(char *_First_Name);
	void Set_Last_Name(char *_Last_Name);
	void Set_DoB(int _DoB);

	void Set_StudentID(int _Student_ID);
	void Set_Department(char *_Department);
	void Set_Current_Semester(int _Current_Semester);
	void Set_CGPA(float _CGPA);

	void Set_Employee_ID(int _Employee_ID);
	void Set_Organization(char* _Organization);
	void Set_Salary(int _Salary);
	void Set_Join_Date(int _Join_Date);

	void Set_Patient_ID(int _Patient_ID);
	void Set_Hospital_Name(char *_Hospital_Name);
	void Set_Test_Result(float _Test_Result);
	void Set_Diagnosis(char *_Diagnosis);


	int Get_Person_ID();
	char *Get_First_Name();
	char *Get_Last_Name();
	int Get_DoB();

	int Get_Student_ID();
	char *Get_Department();
	int Get_Current_Semester();
	float Get_CGPA();

	int Get_Employee_ID();
	char* Get_Organization();
	int Get_Salary();
	int Get_Join_Date();

	int Get_Patient_ID();
	char* Get_Hospital_Name();
	float Get_Test_Result();
	char* Get_Diagnosis();


	void Print_User_ID();

	virtual void User_Type() = 0;
};

