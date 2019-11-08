/*
Uppgift 24
För att slå klubbrekordet i en längdhoppstävling måste hoppet vara längre än 7,92 meter och vindstyrkan högst 2,0 m/s.
Skriv ett program som låter användaren mata in värden och som skriver ut “Grattis!” om det är nytt rekord.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	float l, v;
	cout << "Välkommen, kanske har du slagit klubbrekord?" << endl;
	cout << "Hur långt hoppade du? (meter): ";
	cin >> l;
	cout << "Hur mycket blåste et? (m/s): ";
	cin >> v;
	
	if ( (l > 7.92) && (v <= 2) ) // Både villkoren måste vara sanna
	     cout << "Grattis! Du har det nya klubbrekordet!" << endl;
	
	return 0;
}
