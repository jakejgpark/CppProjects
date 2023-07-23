#include <iostream>
#include <string>
#include "Functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void MenuInterface(void);
void MenuHandler(int select);
int UserInput; 
int CustomerIndex;



int main(int argc, char** argv) {
	MenuInterface();
	return 0;
}

void MenuInterface(void)
{
	ShowMenu();
	while(1)
	{
		std::cin>>UserInput;
		MenuHandler(UserInput);
		
		if (UserInput == 5)
		{
			break;
		}
	}
}


void MenuHandler(int select)
{
	switch (select){
		case 1:
			std::cout<<"Make your Account ID : ";
			std::cin >> CustomerInfo.Info[CustomerIndex].AccountID;
			std::cout<<"Type your Account Name : ";
			std::cin >> CustomerInfo.Info[CustomerIndex].name;
			std::cout<<"How Much Do You Want To Deposit? :";
			std::cin >> CustomerInfo.Info[CustomerIndex].balance;
			CustomerIndex++;
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
	}
}
	
			
