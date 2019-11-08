/*
Uppgift 25
Programmerare gillar kompakt kod. Man behöver inte skriva så mycket då. Villkorsoperatorn är ett exempel på detta.
int tal1 = 2, tal2 = 1;
int a = (tal1>tal2) ? tal1 : tal2;
Om uttrycket i parentesen (tal1>tal2) är true tilldelas a värdet i tal1, annars tilldelas a värdet i tal2.
Pröva villkorsoperatorn tills du är säker på hur den funkar!
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");

    int a,b,tilldelas;
    string storstaTalet;
    cout << "Mata in två heltal: ";
    cout << "Tal 1: ";
    cin >> a;
    cout << "Tal 2: ";
    cin >> b;
    
    cout << endl;
    // Om sant "tilldelas" får värdet som a har, annars värdet som b har. 
    tilldelas = (a > b) ? a : b;
    // Om sant "storstaTalet" får värdet "Det första talet du matade in är störst", annars värdet "Det andra talet du matade in var det största". 
    storstaTalet = (a > b) ? "Det första talet du matade in är störst" : "Det andra talet du matade in var det största";
    
    
    cout << "Störst är " << tilldelas << endl;
    cout << storstaTalet << endl;
    
		
	return 0;
}
