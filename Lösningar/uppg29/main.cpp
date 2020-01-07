/*
Uppgift 29
F�r att sl� klubbrekordet i en l�ngdhoppst�vling m�ste hoppet vara l�ngre �n 7,92 meter och vindstyrkan h�gst 2,0 m/s.
Skriv ett program som l�ter anv�ndaren mata in v�rden och som skriver ut �Grattis!� om det �r nytt rekord. (Uppgift 24)
Anv�nd en funktion som returnerar true om man slagit klubbrekordet och false om man inte slagit rekordet.
I huvudprogrammet skrivs �Grattis!� om man klarat rekordet.
Kolla uppgift 24
*/
bool rekord(float hojd, float vind);
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	float l, v;
	cout << "V�lkommen, kanske har du slagit klubbrekord?" << endl;
	cout << "Hur l�ngt hoppade du? (meter): ";
	cin >> l;
	cout << "Hur mycket bl�ste et? (m/s): ";
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

