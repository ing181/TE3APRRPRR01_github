/*
20. Skriv ett program som läser in en text från tangentbordet till en string-variabel.
Låt sedan programmet skriva ut hur många tecken som ingår i strängen.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	string s;
	cout << "Skriv in en textsträng, inga mellanslag får användas: ";
	cin >> s;
	cout << s << " innehåller " << s.size() << " tecken" << endl;
	
	// Här finns tyvärr nyradstecknet kvar, getline avbryter direkt
	// Vi måste ta bort nyradstecknet så fungerar det.
	// Pröva att kommentera bort nästa rad, så får du se
	cin.ignore(1000,'\n');
	
	cout << "Skriv in en textsträng, använd gärna mellanslag: ";
	getline(cin,s);
	cout << s << " innehåller " << s.size() << " tecken" << endl;
    
	return 0;
}
