/*
Uppgift 26
Skriv ett program som läser in ett tecken och skriver ut tecknets Unicode.
Du matar in tecknet i en funktion som returnerar tecknets Unicode. (EX: STORA A har koden 65)
*/
int convertToUnicode(char tecken);
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	char tecken;
	cout << "Skriv in ett tecke: ";
	cin >> tecken;
    cout << "Unicode för " << tecken << " är " << convertToUnicode(tecken) << endl;
		
	return 0;
}

int convertToUnicode(char tecken)
{
	int unicode = tecken;
	return unicode;
	
}

