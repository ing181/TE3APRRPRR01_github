/*
Uppgift 4
Vilken nytta har man av att kunna deklarera en variabel const?
const = konstant, g�r inte att �ndra.
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    const float PI = 3.131592654;
    // Du kan inte av misstag r�ka �ndra v�rdet p� PI.
    // F�rs�ker du g�r det inte att kompilera.
    // variabler deklarerade som const brukar skrivas
    // med VERSALER.

	return 0;
}
