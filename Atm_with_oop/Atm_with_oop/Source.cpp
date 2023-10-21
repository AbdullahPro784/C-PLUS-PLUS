#include<iostream>
#include<string>

using namespace std;



class Atm{
public:
	Atm(){
		int account_id = 0;
		string account_name = "";
		int choice = 0;
	}

public:
	void display()
	{
		cout << "Welcome to the Atm \n";
		cout << "1)Withdraw\n";
		cout << "2)Add cash to account\n";
		cout << "3)Show balance\n";
		cout << "4)Exit\n";
	}
	void input_choice(int *choice)
	{
		cin >> *choice;
	}
};

class User_account{

public:
	void user(int acc_no){
		int withdraw;
		char reciept;
		if (acc_no == 1234)
		{
			int acc_balance = 100000,extra_chrg=0;
			cout << "How much cash do you want to withdraw: \n";
			cout << "1)1000\n";
			cout << "2)2000\n";
			cout << "3)5000\n";
			cout << "4)10,000\n";
			cout << "5)Other amount\n";
			cin >> withdraw;
			if (withdraw == 1){
				cout << "Do you want reciept (y or n)? Extra charges $2.5\n";
				cin >> reciept;
				if (reciept == 'y'){
					extra_chrg = 2.5;
				}
				else if (reciept == 'n'){
					extra_chrg = 0;
				}
				else{
					cout << "Invalid! \n";
				}

				acc_balance =acc_balance- 1000 - extra_chrg;
				cout << "Your remaining account balance is " << acc_balance<<endl;
			}
			else if (withdraw == 2){
				cout << "Do you want reciept (y or n)? Extra charges $2.5\n";
				cin >> reciept;
				if (reciept == 'y'){
					extra_chrg = 2.5;
				}
				else if (reciept == 'n'){
					extra_chrg = 0;
				}
				else{
					cout << "Invalid! \n";
				}

				acc_balance = acc_balance - 2000 - extra_chrg;
				cout << "Your remaining account balance is " << acc_balance << endl;
			}
			else if (withdraw == 3){
				cout << "Do you want reciept (y or n)? Extra charges $2.5\n";
				cin >> reciept;
				if (reciept == 'y'){
					extra_chrg = 2.5;
				}
				else if (reciept == 'n'){
					extra_chrg = 0;
				}
				else{
					cout << "Invalid! \n";
				}

				acc_balance = acc_balance - 5000 - extra_chrg;
				cout << "Your remaining account balance is " << acc_balance << endl;
			}
			else if (withdraw == 4){
				cout << "Do you want reciept (y or n)? Extra charges $2.5\n";
				cin >> reciept;
				if (reciept == 'y'){
					extra_chrg = 2.5;
				}
				else if (reciept == 'n'){
					extra_chrg = 0;
				}
				else{
					cout << "Invalid! \n";
				}

				acc_balance = acc_balance - 5000 - extra_chrg;
				cout << "Your remaining account balance is " << acc_balance << endl;
			}
			else if (withdraw == 5){
				cout << "Do you want reciept (y or n)? Extra charges $2.5\n";
				cin >> reciept;
				if (reciept == 'y'){
					extra_chrg = 2.5;
				}
				else if (reciept == 'n'){
					extra_chrg = 0;
				}
				else{
					cout << "Invalid! \n";
				}

				acc_balance = acc_balance - 10000 - extra_chrg;
				cout << "Your remaining account balance is " << acc_balance << endl;
			}
		}
	}
	
	
};
// class User_account:public Atm{

// }

int main()
{
	int choice=0,acc_number;
	Atm a1;
	User_account u1;
	a1.display();
	a1.input_choice(&choice);

	if (choice == 1)
	{
		cout << "Enter account number: ";
		cin >> acc_number;
		u1.user(acc_number);
	}
	
	



	return 0;
}