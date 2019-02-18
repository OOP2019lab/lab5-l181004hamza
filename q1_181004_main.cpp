#include"class.h"

void main()
{
	bankAccount myAccount("John Doe",549002);
	myAccount.withdraw(2000);
	myAccount.deposit(4000);
	myAccount.deposit(4000);
	myAccount.Print();


	system("pause");
}