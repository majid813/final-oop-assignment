#include<iostream>
#include<string>
using namespace std;
class account
{
private:
	string  accno, acctitle;
	double amount;
	char acctype;
public:
	account()
	{
		accno = "";
		acctitle = "";
		amount = 0;
		acctype =' ';
	}
	account(string an, string at, double amount, char acct)
	{
		accno = an;
		acctitle = at;
		amount = amount;
		acctype = acct;
	}
	account(const account & y)
	{
		accno = y.accno;
		acctitle = y.acctitle;
		amount = y.amount;
		acctype =y.acctype;
	}
	void deposit(double dep)
	{
		amount = dep;
	}
	void withdraw(double w)
	{
		if (amount > w)
		{
			amount = amount - w;
		}
	}
	void changetype(char c)
	{
		acctype = c;
	}
	double checkbalance()
	{
		return amount;
	}
	void displayaccountinfo()
	{
		cout << "Account Number : " << accno <<endl;
		cout << "Account Title : " << acctitle << endl;
		cout << "Amount : " << amount << endl;
		cout << "Account Type : " << acctype << endl;
	}
	string getaccno()
	{
		return accno;
	}
	string getacctitle()
	{
		return acctitle;
	}
	double getamount()
	{
		return amount;
	}
	char getacctype()
	{
		return acctype;
	}
	void setaccno(string an)
	{
		accno = an;
	}
	void setacctitle(string at)
	{
		 acctitle = at;
	}
	void setamount(double am)
	{
		 amount=am;
	}
	void setacctype(char aty)
	{
		 acctype=aty;
	}
	~account()
	{

	}
};
int main()
{
	account *a = new account("5678", "ibraheem ", 20000, 'c');
	cout << a-> getamount() << endl;
	cout << a->getamount() << endl;
	a->withdraw(700);
	cout << a->getamount() << endl;
	char changetypebyuser;
	cout << "Enter Account Type To Change :" ;
	cin >> changetypebyuser;
	a->changetype(changetypebyuser);
	a->displayaccountinfo();
	account*a2 = new account();
	a2 = a;
	a2->deposit(5000);
	a->displayaccountinfo();
	a2->displayaccountinfo();
}
