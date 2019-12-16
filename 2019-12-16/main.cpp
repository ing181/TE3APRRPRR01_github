#include <iostream>
using namespace std;
// Se övning 30 a, b och c
// EX Beräknar och returnerar arean av en rektangel, a
float area(float b, float h); // Funkttionsdeklaration (utvärd, namn och eventuella invärden)

int main() { // Här börjar huvudprogrammet

    // Se övning 32 a, b och c // Funktionsanrop, funktionen används i huvudprogrammet
	cout << area(5,2) << endl; // Skriver ut 5 på skärmen
	return 0;
} // Här slutar huvudprogrammet

// Se övning 31 a, b och c
float area(float b, float h) // Funktionsdefinition, bestämmer vad funktionen gör
{
	return (b*h/2);
}
