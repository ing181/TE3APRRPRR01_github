/*
Uppgift 7
Skriv ett program som visar att utskrifterna blir olika för 
cout << tal--;
och
cout << --tal;
där tal är en heltalsvariabel.
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    int tal1 = 6, tal2 = 6;
    cout << tal1-- << endl; // Först utskrift, därefter minskning med 1. Skriver ut: 6
    cout << tal1 << endl; // Skriver ut 5
    
    cout << --tal2 << endl; // Först minskning med 1, därefter utskrift. Skriver ut: 5
    cout << tal2 << endl; // Skriver ut 5
    
    // Fungerar på samma sätt med tilldelning som med utskrift
    /*
       int x;
    x = tal1--; // Först tilldelning, därefter minskning med 1.
    
    x = --tal2; // Först minskning med 1, därefter tilldelning
    /*
  
	return 0;
}
