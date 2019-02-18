#include<iostream>
#include<string>
using namespace std;

class bankAccount
{
private:
	string username;
	int userid;
	float balance;
	int balanclimit;
	int *transactions;
	int nooftrans;
	int cap;

public:
	bankAccount(string name,int id);
	void Print();
	void withdraw(int amount);
	void deposit(int amount);
};