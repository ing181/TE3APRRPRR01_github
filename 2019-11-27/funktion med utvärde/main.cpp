/*
Skriv ett program som beräknar värdet av a + b - c. Talen 
a, b och c matas in under programkörning. 
*/
// Exempel på funktion med ett returvärde (utvärde)
double plusMinus(double,double,double); 
#include <iostream>
using namespace std; // Vi använder iostream som tillhör namnrymnden std

int main() {
	setlocale(LC_ALL,"swedish");
	double a,b,c;
	cout << "Mata in värde 1 ";
	cin >> a;	
	cout << "Mata in värde 2 ";
	cin >> b;
	cout << "Mata in värde 3 ";
	cin >> c;
//	double ut;
//	ut = plusMinus(a,b,c);
//	cout << ut << endl;
	cout << plusMinus(a,b,c) << endl;
	return 0;
}
// Värdena kopieras från huvudprogrammet (main)
// a kopieras till x, b till y och c till z
double plusMinus(double x,double y,double z)
{
	// variabeln svar finns bara i funktionen
	// precis som x, y och z
	double svar = x+y-z;
	return svar;
}
