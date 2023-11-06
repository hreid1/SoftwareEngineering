#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
public:
	string name;
	int balance;
};

int main()
{
	BankAccount account1;
	account1.name = "Nageeb";
	account1.balance = 3000;

	cout << account1.name << " has " << account1.balance << " dollars " << endl;

	BankAccount account2;
	account2.name = "Simon";
	account2.balance = 4000;

	cout << account2.name << " has " << account2.balance << " dollars " << endl;

	return 0;
}