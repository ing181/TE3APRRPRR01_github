/*
Vilken nytta har man av att kunna deklarera en variabel const?
const = konstant, går inte att ändra.
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    const float PI = 3.131592654;
    // Du kan inte av misstag råka ändra värdet på PI.
    // Försöker du går det inte att kompilera.
    // variabler deklarerade som const brukar skrivas
    // med VERSALER.

	return 0;
}
