/*
Uppgift 23
Skriv ett program som ändrar ett inmatat namn, med för- och efternamn,
till exempel “Kalle Anka” till “kalle anka”.
Det vill säga ändrar första bokstaven i för- och efternamnet från en VERSAL till en gemen.

*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	string namn;
	cout << "Mata in ditt För- och efternamn: ";
	getline(cin,namn);
	// Att första tecknet ska ändras från VERSAl till gemen, vet vi. 
	// Första bokstaven i förnamnet
	
	namn[0] = namn[0] + 32; // Kolla ASCCI-tabellen. (UNICODE-tabellen) Där sår det vilka heltal
	                        // som representerar vilka tecken. Liten bokstav är alltid +32 i
	                        // förhållande till STOR bokstav
	                        
	// Vi måste hitta nästa VERSAL. Vi vet att den kommer
	// direkt efter mellanslaget mellan för- och efternamn.
	// Så vi letar upp mellanslaget
	
	int mellanslag = namn.find(' ');
	// Vi vet att efternamnet kommer direkt efter mellanslaget
	namn[mellanslag+1] = namn[mellanslag+1] + 32; 
	                        
	cout << "Välkommen " << namn << endl;

    
	return 0;
}
