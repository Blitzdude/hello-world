#include <iostream>
#include <string>

using namespace std;


int main()
{
	string name;
	string address;
	int age;

	cout << "Hello world!\n";
	cout << "What is your name"; 
	cin >> name;
	cout << "How old are you\n";
	cin >> age;
	cin.ignore();
	cout << "What is your address 'wink wink'?\n";
	getline(cin, address);

	cout << "name: " << name << ", age: " << age << endl;
	cout << "address: " << address;

	
	return 0;
}
