#include <iostream>
using namespace std;
int main() {
	// Om in- och utmatning.
	// cin "Operativsystemets standardinmatningsenhet"
	// (Tangentbordet)

	// inmatningsoperatorn >>
	// cin >>
	// Vi behöver en lämplig variabel
	// char

	char c; // Variabel deklareras. Den finns!

	cout << "Mata in en gemen (liten) bokstav: ";
    cin >> c;
    // Standardutmatningsenheten cout (skärmen)
    // utmatningsoperatorn <<
    // Först kommer textsträngen sen variabel och sist endl
    cout << "Du matade in " << c << endl;
    c = c - 32;
    cout << "Motsvarande VERSAL (STOR bokstav) " << c << endl;
	return 0;
}
