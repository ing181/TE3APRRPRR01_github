/*
Uppgift 22
Skriv ett program som l�ser in ett klockslag p� formen hh:mm
till exempel 15:36 och lagrar det i en string-variabel tid. 
Dela upp tid i tv� delstr�ngar timme och minut med hj�lp av
metoden substr och skriv sedan ut str�ngarnas inneh�ll.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	string tid, h, m;
	cout << "Skriv in ett klockslag (hh:mm) ";
	cin >> tid;
	// Du vet positionerna i str�ngen "tid" som du ska plocka ut ifr�n
	h = tid.substr(0,2); // Plockar ut och l�gger de tv� f�rsta tecknen i variabeln h.
	                     // Startar i position 0 och l�ngden �r 2 tecken
	m = tid.substr(3,2); // Plockar ut och l�gger de tv� sista tecknen i variabeln m.
	                     // Startar i position 3 och l�ngden �r 2 tecken
	                     
    cout << "Du matade in tiden " << m << " minuter efter " << h << endl;
    
	return 0;
}
