#include "Employee.h"
#include <string.h>

Employee::Employee() : Person()
{
	Employee_ID = -1;
	strcpy_s(Organization, "N/A");
	Salary = -1;
	Join_Date = -1;
}


Employee::~Employee()
{
}
