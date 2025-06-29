#include<iostream>
#include<cstring>
using namespace std;
class demo {
private:
	int a=1; // private member value was 1 
protected:
	int b=2;
public:
	int c=3;
	// indirectly accessing private members 
	int accessprivate(int new_a) {
		a = new_a;
		return a;  
	}
	
	void displayall() {
		cout << " Private a : " << a << endl;
		cout << " Protected b : " << b << endl;
		cout << " Public c : " << c << endl;
	}
};
int main() {
	demo d; 
	d.c = 10; 
	d.accessprivate(20); //indirectly change value of a from 1 to 20 

	//d.a = 1 ; not allowed , 'a' is private
	//d.b=2 ; not allowed , 'b' is protected 
	d.displayall(); 
	return 0; 
}