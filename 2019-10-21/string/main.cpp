#include <string> // Vi inkluderar klassen string
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	string s="hejsan";
	cout << s << endl;
	s="kaffe";
    cout << s << endl;
	// Metod för att hitta första förekomsten av tecknet f 
	// i strängen s
	for (int i=0; i<5; i++)
	{
		if (s[i] == 'f')
		{
			cout << "Tecknet " << s[i] << " hittas på plats " << i << endl;
			break;
		}
	}
	// Metod som finns inbygd i klassen string
	// plats tilldelas heltalet för positionen
	// av första förekomsten av f
	int plats = s.find('f');
	cout << "Tecknet " << s[plats] << " hittas på plats " << plats << endl;
	// Metod för att få veta hur många tecken det finns i en sträng
	int antalTecken = s.size();
    cout << s << " innehåller " << antalTecken << " tecken" << endl;
    // Du kan sätta ihop strängar (konkatenera)
    // + tecknet används för konkateneringen
    string s1 = " gott!";
    string s2 = s+s1+" eller hur";
    cout << s2 << endl;
    // Plocka ut en del av en sträng
    // s2.substr(start,längd);
    string s3 = s2.substr(6,3);
    cout << s3 << endl;
	return 0;
}
