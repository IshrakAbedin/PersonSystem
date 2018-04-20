#include "Student.h"
#include <string.h>

Student::Student() : Person()
{
	Student_ID = -1;
	strcpy_s(Department, "N/A");
	Current_Semester = -1;
	CGPA = -1;
}


Student::~Student()
{
}
