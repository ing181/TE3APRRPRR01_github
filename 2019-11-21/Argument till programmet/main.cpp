// Lite om program i C++
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
    setlocale(LC_ALL,"swedish");
    // Argument eller inv�rde till ett
    // program inneb�r att du n�r du startar
    // programmet fr�n kommandotolken
    // (s�k p� "cmd")
    // och skriver n�got efter programmnamnet
    // tar programmet hand om det du skriver.
    // Det hamnar i variabel argv[],
    // argv[1] det f�rsta ordet
    // argv[2] det andra... och s� vidare
    // F�rsta argumentet argv[0] �r alltid
    // programnamnet
	cout << "Programmets namn �r " << argv[0] << endl;
	string s(argv[1]);// Andra argumentet
	// konverteras till en mer hanterbar
	// string
	int langd = s.size();
	cout << s << " har " << langd <<" tecken" << endl;
	// Ett systemanrop (s�ger till Windows att ta en paus)
	system("PAUSE");
	return 0;
}
