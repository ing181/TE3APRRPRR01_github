/*
Uppgift 7
Skriv ett program som visar att utskrifterna blir olika f�r 
cout << tal--;
och
cout << --tal;
d�r tal �r en heltalsvariabel.
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    int tal1 = 6, tal2 = 6;
    cout << tal1-- << endl; // F�rst utskrift, d�refter minskning med 1. Skriver ut: 6
    cout << tal1 << endl; // Skriver ut 5
    
    cout << --tal2 << endl; // F�rst minskning med 1, d�refter utskrift. Skriver ut: 5
    cout << tal2 << endl; // Skriver ut 5
    
    // Fungerar p� samma s�tt med tilldelning som med utskrift
    /*
       int x;
    x = tal1--; // F�rst tilldelning, d�refter minskning med 1.
    
    x = --tal2; // F�rst minskning med 1, d�refter tilldelning
    /*
  
	return 0;
}
