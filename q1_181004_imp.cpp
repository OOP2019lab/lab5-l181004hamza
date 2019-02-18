#include"class.h"

bankAccount :: bankAccount(string name,int id)
{
	username=name;
	userid=id;
	transactions=nullptr;
	balance=40000;
	balanclimit=2000000;
	nooftrans=0;
	cap=1;
}

void bankAccount :: Print()
{
	cout<<"the name of the user is:"<< username<<endl;
	cout<<"the user id is:"<<userid<<endl;
	cout<<"the balance is:"<<balance<<endl;
	cout<<"the no of transactions are:"<<nooftrans<<endl;
	cout<<"the transactions are:";
	for(int i=0;i<nooftrans;i++)
	cout<<transactions[i]<<endl;
}

void bankAccount :: withdraw(int amount)
{
	 if(transactions==nullptr)//first input
	{
		transactions=new int [cap];
		transactions[0]=-amount;
		balance=balance-amount;
		nooftrans++;
		//cout<<"the transactions are"<<nooftrans<<endl;
	} 
	
	else if(transactions!=nullptr)//when array already has elements
	{
		int *temp=new int [cap*2];
		for(int i=0;i<nooftrans;i++)
		temp[i]=transactions[i];
		balance=balance-amount;
		temp[nooftrans]=-amount;
		delete [] transactions;
		transactions=temp;
		nooftrans++;
	}
	
	else
		cout<<"unsuccessful"<<endl;
	

}

void bankAccount :: deposit(int amount)
{
	
		if(transactions==nullptr)//first input
	{
		transactions=new int [cap];
		transactions[0]=amount;
		balance=balance+amount;
		nooftrans++;
		cout<<"the transactions are"<<nooftrans<<endl;
	} 
	
	else if(transactions!=nullptr)//when array already has elements
	{
		int *temp=new int [cap*2];
		for(int i=0;i<nooftrans;i++)
		temp[i]=transactions[i];
		balance=balance+amount;

		temp[nooftrans]=amount;
		delete [] transactions;
		transactions=temp;
		nooftrans++;
	}
	
	else
		cout<<"unsuccessful"<<endl;
	

}

