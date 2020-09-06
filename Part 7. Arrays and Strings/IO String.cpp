// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;

///////////////////////////

void main()
{
	string full_name, nickname, address;
	string greeting(" Greetings, challenger ");
	 
	cout << "\n Enter you full name: ";
	getline(cin, full_name);
	cout << endl;
	cout << " Your name is  " << full_name << endl;

	cout << "\n Enter your nickname: ";
	cin >> nickname;
	cout << endl;

	greeting += nickname;
	cout << greeting;
	cout << endl;

	cout << "\n Enter you address: ";
	getline(cin, address, '$');
	cout << "\n Your address is " << address << endl;

}