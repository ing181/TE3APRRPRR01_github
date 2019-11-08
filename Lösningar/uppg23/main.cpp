/*
Uppgift 23
Skriv ett program som �ndrar ett inmatat namn, med f�r- och efternamn,
till exempel �Kalle Anka� till �kalle anka�.
Det vill s�ga �ndrar f�rsta bokstaven i f�r- och efternamnet fr�n en VERSAL till en gemen.

*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	string namn;
	cout << "Mata in ditt F�r- och efternamn: ";
	getline(cin,namn);
	// Att f�rsta tecknet ska �ndras fr�n VERSAl till gemen, vet vi. 
	// F�rsta bokstaven i f�rnamnet
	
	namn[0] = namn[0] + 32; // Kolla ASCCI-tabellen. (UNICODE-tabellen) D�r s�r det vilka heltal
	                        // som representerar vilka tecken. Liten bokstav �r alltid +32 i
	                        // f�rh�llande till STOR bokstav
	                        
	// Vi m�ste hitta n�sta VERSAL. Vi vet att den kommer
	// direkt efter mellanslaget mellan f�r- och efternamn.
	// S� vi letar upp mellanslaget
	
	int mellanslag = namn.find(' ');
	// Vi vet att efternamnet kommer direkt efter mellanslaget
	namn[mellanslag+1] = namn[mellanslag+1] + 32; 
	                        
	cout << "V�lkommen " << namn << endl;

    
	return 0;
}
