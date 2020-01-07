/*
Uppgift 29
För att slå klubbrekordet i en längdhoppstävling måste hoppet vara längre än 7,92 meter och vindstyrkan högst 2,0 m/s.
Skriv ett program som låter användaren mata in värden och som skriver ut “Grattis!” om det är nytt rekord. (Uppgift 24)
Använd en funktion som returnerar true om man slagit klubbrekordet och false om man inte slagit rekordet.
I huvudprogrammet skrivs “Grattis!” om man klarat rekordet.
Kolla uppgift 24
*/
bool rekord(float hojd, float vind);
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
	
	if ( rekord(l,v) )
		cout << "Grattis till nytt klubbrekord!" << endl;
	else
	    cout << "Beklagar, inget klubbrekord." << endl;
		
	return 0;
}

bool rekord(float langd, float vind)
{
	if ( (langd > 7.92) && (vind <= 2) ) 
	     return true;
	else
	     return false;  
}

