/*
Uppgift 1
Skriv ett program som ber�knar v�rdet av a + b - c. Talen 
a, b och c matas in under programk�rning. 
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int a, b, c;
	// Alternativt 
	// float a, b, c;
	// om du vill kunna anv�nda flyttal (decimaltal)
	cout << "Mata in f�rsta talet: ";
	cin >> a;
	cout << "Mata in andra talet: ";
	cin >> b;
	cout << "Mata in tredje talet: ";
	cin >> c;
	cout << a << "+" << b << "-" << c << "=" << (a+b-c) << endl;

	return 0;
}
