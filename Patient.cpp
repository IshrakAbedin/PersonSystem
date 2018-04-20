#include "Patient.h"
#include <string.h>

Patient::Patient() : Person()
{
	Patient_ID = -1;
	strcpy_s(Hospital_Name, "N/A");
	Test_Result = -1;
	strcpy_s(Diagnosis, "N/A");
}


Patient::~Patient()
{
}
