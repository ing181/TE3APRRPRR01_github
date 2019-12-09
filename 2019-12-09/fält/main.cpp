// Hantera fält i funktioner

// utvärde void betyder att inget returneras (kommer från funktionen)
// Invärdet "float falt[]" innebär att man ska skicka ett float fält
// till funktionen.
#include <iostream>
using namespace std;
void forandra(float falt[]); // Funktionsdeklaration
void forandra2(float); // Funktionsdeklaration
int main() {
	
	float f[3];
	f[0] = 6.1;
	f[1] = 1.1;
	f[2] = 0.5;
	cout << "Före funktionen" << endl;
	cout << f[0] << endl;
	cout << f[1] << endl;
	cout << f[2] << endl;
	forandra(f); // Funktionen anropas
	cout << "Efter funktionen" << endl;
	cout << f[0] << endl;
	cout << f[1] << endl;
	cout << f[2] << endl;
	
	float y = 12;
	cout << "Före funktionen" << endl;
	cout << y << endl;
	forandra2(y);
	cout << "Efter funktionen" << endl;
	cout << y << endl;

	return 0;
}
void forandra(float falt[]) // Funktionsdefinition (Vad den gör)
{
	falt[0] = 100;
	falt[1] = 101;
}
void forandra2(float x)
{
	x = 222;
}


