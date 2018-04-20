#include "Admin.h"
#include<iostream>

Admin::Admin() : Profile()
{
}


Admin::~Admin()
{
}

void Admin::User_Type()
{
	std::cout << "This is an Admin" << std::endl;
}
