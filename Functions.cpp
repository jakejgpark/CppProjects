#include <iostream>
#include <string>
#include "Functions.h"

void BankAccountInfo::ShowMenu(void)
{
	cout<<"-------------------Menu--------------------"<<endl;
	cout<<"1. Create a bank account"<<endl;
	cout<<"2. Deposit money"<<endl;
	cout<<"3. Withdraw money"<<endl;
	cout<<"4. Bank account information"<<endl;
	cout<<"5. Close the program"<<endl<<endl;
	cout<<"Select: ";
}


BankAccountInfo Info;
extern ShowMenu();
