#include<iostream>
#include<string>
using namespace std;
class Mobile {
public:
	int IMEIno;
	string type;
	string make;
	int Modelno;
	float memory;
	string os;
	void setvalues() {
		cout << "Enter the IMEI no : ";
		cin >> IMEIno;
		cin.ignore();//eats that leftover newline and moves on
		cout << "Enter Type : ";
		getline(cin,type);
		cout << "Enter make : ";
		getline(cin, make);
		cout << "Enter the Model no : ";
		cin >> Modelno;
		cout << "Enter the memory : ";
		cin >> memory;
		cin.ignore();
		cout << "Enter the Operating System : ";
		getline(cin, os);
	}
	void displayvalues() {
		cout << endl;
		cout << "The IMEI no : " << IMEIno << endl;
		cout << "The Type : " << type << endl;
		cout << "the make : " << make << endl;
		cout << "The Model no : " << Modelno << endl;
		cout << "The memory : " << memory << endl;
		cout << "The Operating System : " << os << endl;

	}
};
int main() {
	Mobile m1; // the object for class 
	m1.setvalues(); // to take input values 
	m1.displayvalues(); // displaying the data 
	return 0;
}



