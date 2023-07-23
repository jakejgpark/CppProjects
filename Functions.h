#include <iostream>
#include <string>

class BankAccountInfo
{
	public:
		struct InfoStruct{
			int AccountID;
			std::string name;
			int balance;
		};
		InfoStruct Info[4];
		void ShowMenu(void);
};
