#include <iostream>
#include "User.h"
#include "Admin.h"
int main()
{
	Profile *p, *q;
	p = new User;
	p->User_Type();
	p->Print_User_ID();
	
	q = new Admin;
	q->User_Type();
	q->Print_User_ID();

	return 0;
}