#include "Person.h"
#include <string.h>

Person::Person()
{
	Person_ID = -1;
	strcpy_s(First_Name, "FirstName");
	strcpy_s(Last_Name, "LastName");
	DoB = -1 ;
}


Person::~Person()
{
}
