// Funktion
#include <iostream>
// Adderar två tal och returnerar summan
int plussa(int, int); // Funktionsdeklaration
//  Första talet minus det andra talet, returnerar differensen
int subtrahera(int, int); // Funktionsdeklaration
using namespace std;
int main() {
	
	cout << plussa(3,2) << endl; // Funktionsanrop, funktionen används
    cout << plussa(4,3) << endl; // Funktionsanrop
    cout << subtrahera(5,4) << endl; // Funktionsanrop
    
	return 0;
}

int plussa(int a, int b) // Funktionsdefinition
{
	int summa = a + b;
	return summa; // Kommer ut från funktionen
}

int subtrahera(int a, int b) // Funktionsdefinition
{
	int summa = a - b;
	return summa; // Kommer ut från funktionen
}
