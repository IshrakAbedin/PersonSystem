#include "User.h"
#include <iostream>

User::User() : Profile()
{
}


User::~User()
{
}

void User::User_Type()
{
	std::cout << "This is a Regular User" << std::endl;
}
