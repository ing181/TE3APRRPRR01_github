/*
Uppgift 27
Gör ett program som låter användaren mata in en tid i sekunder.
Denna tid ska av programmet omvandlas till en tidsangivelse i timmar, minuter och sekunder.
Använd endast heltalsvariabler. Du skickar antalet sekunder till en funktion som utför
beräkningen och skriver ut resultatet.
Kolla uppgift 6
*/
void convertToSecMinHouer(int sec);
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	int sekunder;
	cout << "Skriv in antalet sekundere: ";
	cin >> sekunder;
	convertToSecMinHouer(sekunder);
		
	return 0;
}

void convertToSecMinHouer(int s)
{
	int s2, h, m;
	s2 = s;
	h = s / 3600;
	s = s - h * 3600; // Tar bort de sekunder som redan har uttryckts i timmar.
	m = s / 60;
	s = s - m * 60; // Tar bort de sekunder som redan har uttryckts i minuter.
	cout << s2 << " sekunder motsvaras av " << h << " timmar, " << m << " minuter och " << s << " sekunder" << endl;
	
}

