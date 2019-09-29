#include <iostream>
using namespace std;
int main() {

	int maxLenght; // Deklareras (Skapas)
	maxLenght = 5; // Tilldelas
	cout << maxLenght << endl;
	
	// OBS! Decimalpunkt
	maxLenght = 5.9; // Tilldelas
	cout << maxLenght  << endl;
	// Vad får du för utskrift från programmet?
	// En "int" kan endast innehålla heltal
	
	cout << sizeof(short) << endl; // Skriver ut hur stort tal som datatypen "short" kan innehålla
	// Utskriften "2" innebär att "short" använder 2 byte (1 byte = 8 bitar)
	// Det vil säga "short" använder 16 bitar (ettor och nollor)
	// Kan innehålla positiva och negativa tal
	
	// "unsigned" betyder att det bara kan finnas positiva tal
	// Det får plats ett dubbelt så stort tal om endast positiva tal får förekomma.
	// Biten längst till vänster (den mest signifikanta (mest värda) biten)
	// Behöver inte användas för att tala om om talet är positivt eller negativt.
	// Biten kan anvädas för att lagra talet i stället.
	unsigned short tal = 65535;
    cout << tal << endl;

    char tecken = 65;
    char tecken2 = 'A';
    int tecken3 = 65;
	
    cout << tecken << endl; // Utskrift: A
    cout << tecken2 << endl; // Utskrift: A
    cout << tecken3 << endl; // Utskrift: 65
    tecken3 = tecken3 + 1; // Ökar värdet på tecken3 med 1
    tecken++; // Ökar värdet på tecken med 1
	
    tecken2++;
    cout << tecken2 << endl; // // Utskrift: B
    
	return 0;
}
