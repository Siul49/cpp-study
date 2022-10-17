#include <iostream>
using namespace std;

class Account {
public:
	string owner;
	int id, balance;

	void deposit(int money) {
		this->balance += money;
	}
	int withdraw(int money) {
		balance -= money;
		return money;
	}
	string getOwner() {
		return owner;
	}
	int inquiry() {
		return balance;
	}



	Account(string owner, int id, int money) {
		this->owner = owner;
		this->id = id;
		this->balance = money;
	}
};

int main()
{
	Account a("rudtn", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;


}