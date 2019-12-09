// Hantera f�lt i funktioner

// utv�rde void betyder att inget returneras (kommer fr�n funktionen)
// Inv�rdet "float falt[]" inneb�r att man ska skicka ett float f�lt
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
	cout << "F�re funktionen" << endl;
	cout << f[0] << endl;
	cout << f[1] << endl;
	cout << f[2] << endl;
	forandra(f); // Funktionen anropas
	cout << "Efter funktionen" << endl;
	cout << f[0] << endl;
	cout << f[1] << endl;
	cout << f[2] << endl;
	
	float y = 12;
	cout << "F�re funktionen" << endl;
	cout << y << endl;
	forandra2(y);
	cout << "Efter funktionen" << endl;
	cout << y << endl;

	return 0;
}
void forandra(float falt[]) // Funktionsdefinition (Vad den g�r)
{
	falt[0] = 100;
	falt[1] = 101;
}
void forandra2(float x)
{
	x = 222;
}


