#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string namn;
	cout << "Mata in ditt namn: ";
	// Inmatning sker tills första blankslaget.
	// white space
    // cin >> namn;
    // "cin >> variabel" matar in till första blanktecken
    // och lämnar '\n' kvar
    // vilket ställer till det för
    // "getline(cin,namn);" som slutar direkt
    // Inmatning sker tills radbrytningstecknet (newline) hittas
    // Då funkar det att ha med blankslag
    cin >> namn;  // Tyvärr blir '\n' kvar...
    cout << namn << endl;
    cin.ignore(1000,'\n'); // Tar bort '\n'
    // Om vi inte kör "cin.ignore(1000,'\n');"
    // '\n' dyker upp som första teckan
    // och ingen inmatning sker
    getline(cin,namn); // Matar in tills '\n'
    cout << namn << endl;
	return 0;
}


