#include <iostream>
#include <string>

using namespace std;

class Bank_account {
private:
	string name_of_depositor;
	int acc_number;
	string type_of_account;
	float balance;

public:
	void assign_values() {
		cout << "Enter account holder name: ";
		cin.ignore();
		getline(cin, name_of_depositor);
		cout << "Enter your account number: ";
		cin >> acc_number;
		cout << "Enter the type of account: ";
		cin.ignore();
		getline(cin, type_of_account);
		cout << "Enter balance: ";
		cin >> balance;
	}

	void deposit() {
		int acc;
		cout << "Enter account number to deposit cash: ";
		cin >> acc;

		if (acc == acc_number) {
			float cash;
			cout << "Enter amount to deposit: ";
			cin >> cash;
			balance += cash;
			cout << "Amount deposited successfully!" << endl;
		}
		else {
			cout << "Wrong account number! Try Again!" << endl;
		}
	}

	void withdraw() {
		int acc;
		cout << "Enter account number to withdraw cash: ";
		cin >> acc;

		if (acc == acc_number) {
			float cash;
			cout << "Enter amount to withdraw: ";
			cin >> cash;

			if (balance >= cash) {
				balance -= cash;
				cout << "Amount withdrawn successfully!" << endl;
			}
			else {
				cout << "Insufficient balance!" << endl;
			}
		}
		else {
			cout << "Wrong account number! Try Again!" << endl;
		}
	}

	void display() {
		int acc;
		cout << "Enter account number to display balance: ";
		cin >> acc;

		if (acc == acc_number) {
			cout << "Account holder name: " << name_of_depositor << endl;
			cout << "Account number: " << acc_number << endl;
			cout << "Account type: " << type_of_account << endl;
			cout << "Account balance: " << balance << endl;
		}
		else {
			cout << "Wrong account number! Try Again!" << endl;
		}
	}
};

int main() {
	int choice;
	Bank_account Account1;

	while (true) {
		cout << "Press 1 to make account" << endl;
		cout << "Press 2 to deposit cash from existing account" << endl;
		cout << "Press 3 to withdraw cash from existing account" << endl;
		cout << "Press 4 to display balance" << endl;
		cout << "Press 0 to exit" << endl;
		cin >> choice;

		
		if (choice == 1) {
			Account1.assign_values();
		}
		else if (choice == 2) {
			Account1.deposit();
		}
		else if (choice == 3) {
			Account1.withdraw();
		}
		else if (choice == 4) {
			Account1.display();
		}
		else if (choice == 0) {
			break;
		}
	}

	return 0;
}