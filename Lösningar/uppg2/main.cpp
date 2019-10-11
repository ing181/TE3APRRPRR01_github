/*
Skriv ett program som läser in ett tecken och skriver ut tecknets Unicode.
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	char tecken;
	cout << "1 Mata in ett tecken: ";
	cin >> tecken;
	// Typomvandling till int
	cout << "Heltalet som betecknar " << tecken << " är " << (int)tecken << endl;
	

	return 0;
}
