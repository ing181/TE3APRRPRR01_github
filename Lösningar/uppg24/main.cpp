/*
Uppgift 24
F�r att sl� klubbrekordet i en l�ngdhoppst�vling m�ste hoppet vara l�ngre �n 7,92 meter och vindstyrkan h�gst 2,0 m/s.
Skriv ett program som l�ter anv�ndaren mata in v�rden och som skriver ut �Grattis!� om det �r nytt rekord.
*/

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
	
	if ( (l > 7.92) && (v <= 2) ) // B�de villkoren m�ste vara sanna
	     cout << "Grattis! Du har det nya klubbrekordet!" << endl;
	
	return 0;
}
