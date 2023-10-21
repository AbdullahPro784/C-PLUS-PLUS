#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
	int seats, no_of_tyres;
	string clr;
public:
	Car()
	{
		int seats = 0;
		string clr = 0;
		int no_of_tyres = 0;
	}

public:
	void display()
	{
		cout << "The number of seats car has " << seats << " seats" << endl;
		cout << "The car has" << clr << " color " << endl;
		cout << "The car has " << no_of_tyres << " tyres\n";
	}
};
int main()
{
	Car corolla;
	corolla.display();

	return 0;
}