/*
Skriv ett program som ber�knar v�rdet av a + b - c. Talen 
a, b och c matas in under programk�rning. 
*/
// Exempel p� funktion med ett returv�rde (utv�rde)
double plusMinus(double,double,double); 
#include <iostream>
using namespace std; // Vi anv�nder iostream som tillh�r namnrymnden std

int main() {
	setlocale(LC_ALL,"swedish");
	double a,b,c;
	cout << "Mata in v�rde 1 ";
	cin >> a;	
	cout << "Mata in v�rde 2 ";
	cin >> b;
	cout << "Mata in v�rde 3 ";
	cin >> c;
//	double ut;
//	ut = plusMinus(a,b,c);
//	cout << ut << endl;
	cout << plusMinus(a,b,c) << endl;
	return 0;
}
// V�rdena kopieras fr�n huvudprogrammet (main)
// a kopieras till x, b till y och c till z
double plusMinus(double x,double y,double z)
{
	// variabeln svar finns bara i funktionen
	// precis som x, y och z
	double svar = x+y-z;
	return svar;
}
