#include <iostream>
using namespace std;
// Se �vning 30 a, b och c
// EX Ber�knar och returnerar arean av en rektangel, a
float area(float b, float h); // Funkttionsdeklaration (utv�rd, namn och eventuella inv�rden)

int main() { // H�r b�rjar huvudprogrammet

    // Se �vning 32 a, b och c // Funktionsanrop, funktionen anv�nds i huvudprogrammet
	cout << area(5,2) << endl; // Skriver ut 5 p� sk�rmen
	return 0;
} // H�r slutar huvudprogrammet

// Se �vning 31 a, b och c
float area(float b, float h) // Funktionsdefinition, best�mmer vad funktionen g�r
{
	return (b*h/2);
}
