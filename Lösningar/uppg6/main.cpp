/*
Gör ett program som låter användaren mata in en tid i sekunder.
Denna tid ska av programmet omvandlas
till en tidsangivelse i timmar, minuter och sekunder. Använd endast heltalsvariabler.
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int s,s2,m,h;

	cout << "Mata in antalet sekunder: ";
	cin >> s;
	s2 = s;
	h = s / 3600;
	s = s - h * 3600; // Tar bort de sekunder som redan har uttryckts i timmar.
	m = s / 60;
	s = s - m * 60; // Tar bort de sekunder som redan har uttryckts i minuter.
	cout << s2 << " sekunder motsvaras av " << h << " timmar, " << m << " minuter och " << s << " sekunder" << endl;
	return 0;
}
