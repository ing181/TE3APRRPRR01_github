/*
Uppgift 25
Programmerare gillar kompakt kod. Man beh�ver inte skriva s� mycket d�. Villkorsoperatorn �r ett exempel p� detta.
int tal1 = 2, tal2 = 1;
int a = (tal1>tal2) ? tal1 : tal2;
Om uttrycket i parentesen (tal1>tal2) �r true tilldelas a v�rdet i tal1, annars tilldelas a v�rdet i tal2.
Pr�va villkorsoperatorn tills du �r s�ker p� hur den funkar!
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");

    int a,b,tilldelas;
    string storstaTalet;
    cout << "Mata in tv� heltal: ";
    cout << "Tal 1: ";
    cin >> a;
    cout << "Tal 2: ";
    cin >> b;
    
    cout << endl;
    // Om sant "tilldelas" f�r v�rdet som a har, annars v�rdet som b har. 
    tilldelas = (a > b) ? a : b;
    // Om sant "storstaTalet" f�r v�rdet "Det f�rsta talet du matade in �r st�rst", annars v�rdet "Det andra talet du matade in var det st�rsta". 
    storstaTalet = (a > b) ? "Det f�rsta talet du matade in �r st�rst" : "Det andra talet du matade in var det st�rsta";
    
    
    cout << "St�rst �r " << tilldelas << endl;
    cout << storstaTalet << endl;
    
		
	return 0;
}
