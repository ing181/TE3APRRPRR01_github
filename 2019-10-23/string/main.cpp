#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string namn;
	cout << "Mata in ditt namn: ";
	// Inmatning sker tills f�rsta blankslaget.
	// white space
    // cin >> namn;
    // "cin >> variabel" matar in till f�rsta blanktecken
    // och l�mnar '\n' kvar
    // vilket st�ller till det f�r
    // "getline(cin,namn);" som slutar direkt
    // Inmatning sker tills radbrytningstecknet (newline) hittas
    // D� funkar det att ha med blankslag
    cin >> namn;  // Tyv�rr blir '\n' kvar...
    cout << namn << endl;
    cin.ignore(1000,'\n'); // Tar bort '\n'
    // Om vi inte k�r "cin.ignore(1000,'\n');"
    // '\n' dyker upp som f�rsta teckan
    // och ingen inmatning sker
    getline(cin,namn); // Matar in tills '\n'
    cout << namn << endl;
	return 0;
}


