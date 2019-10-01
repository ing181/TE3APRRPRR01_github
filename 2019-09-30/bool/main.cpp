#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	// Deklaration
	bool b;
	b = true;
	cout << b << endl; // Utskrift: 1
	b = false;
	cout << b << endl; // Utskrift: 0
	cout << "bool använder " << sizeof(bool) << " bytes" << endl;
	b = 0; // Samma sak som false
	cout << b << endl; // Utskrift: 0
	
	

	return 0;
}
