//header files
#include<iostream>
#include<string>

using namespace std;

//struct definition:
struct user{//structure definition
	string name;
	int age, id;
};
void display(user u[]){//function definition
	for (int i = 0; i < 10; i++){//10 iterations
		cout << "Your name Employee " << i+1 << "is  " << u[i].name << endl;
	}
}
int main(){
	user u1[10];//array of structure
	for (int i = 0; i < 10; i++){//10 iterations
		cout << "Enter your name Employee " << i+1 << ": ";
		cin.ignore();
		cin >> u1[i].name;//takes user name
		cin.ignore();
	}

	display(u1);//function call



	return 0;//return keyword.
}