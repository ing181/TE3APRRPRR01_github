/*
20. Skriv ett program som l�ser in en text fr�n tangentbordet till en string-variabel.
L�t sedan programmet skriva ut hur m�nga tecken som ing�r i str�ngen.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	string s;
	cout << "Skriv in en textstr�ng, inga mellanslag f�r anv�ndas: ";
	cin >> s;
	cout << s << " inneh�ller " << s.size() << " tecken" << endl;
	
	// H�r finns tyv�rr nyradstecknet kvar, getline avbryter direkt
	// Vi m�ste ta bort nyradstecknet s� fungerar det.
	// Pr�va att kommentera bort n�sta rad, s� f�r du se
	cin.ignore(1000,'\n');
	
	cout << "Skriv in en textstr�ng, anv�nd g�rna mellanslag: ";
	getline(cin,s);
	cout << s << " inneh�ller " << s.size() << " tecken" << endl;
    
	return 0;
}
