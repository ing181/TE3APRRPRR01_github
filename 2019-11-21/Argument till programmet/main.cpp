// Lite om program i C++
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
    setlocale(LC_ALL,"swedish");
    // Argument eller invärde till ett
    // program innebär att du när du startar
    // programmet från kommandotolken
    // (sök på "cmd")
    // och skriver något efter programmnamnet
    // tar programmet hand om det du skriver.
    // Det hamnar i variabel argv[],
    // argv[1] det första ordet
    // argv[2] det andra... och så vidare
    // Första argumentet argv[0] är alltid
    // programnamnet
	cout << "Programmets namn är " << argv[0] << endl;
	string s(argv[1]);// Andra argumentet
	// konverteras till en mer hanterbar
	// string
	int langd = s.size();
	cout << s << " har " << langd <<" tecken" << endl;
	// Ett systemanrop (säger till Windows att ta en paus)
	system("PAUSE");
	return 0;
}
