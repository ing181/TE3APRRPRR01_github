/*
Skriv ett program som beräknar värdet av a + b - c. Talen 
a, b och c matas in under programkörning. 
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int a, b, c;
	// Alternativt 
	// float a, b, c;
	// om du vill kunna använda flyttal (decimaltal)
	cout << "Mata in första talet: ";
	cin >> a;
	cout << "Mata in andra talet: ";
	cin >> b;
	cout << "Mata in tredje talet: ";
	cin >> c;
	cout << a << "+" << b << "-" << c << "=" << (a+b-c) << endl;

	return 0;
}
