// Aritmetiska operatorer
#include <iostream>
using namespace std;
int main() {
	
	// +, -, *, /
	// Fungerar som man tänker sig
	// Sätt paranteser runt det som 
	// ska ske
	// % Modulusoperatorn
	// Används vid heltalsoperationer (int)
	// Returnerar ("Kommer ut ifrån")
	// Resten vid divsion med heltal
	// EX
	int rest = (5 % 3);
	cout << rest << endl;
	
	cout << "0 " << 0 % 3 << endl;
	cout << "1 " << 1 % 3 << endl;
	cout << "2 " << 2 % 3 << endl;
	cout << "3 " << 3 % 3 << endl;
	cout << "4 " << 4 % 3 << endl;
	cout << "5 " << 5 % 3 << endl;
	cout << "6 " << 6 % 3 << endl;
	cout << "7 " << 7 % 3 << endl;	
	
	// Tilldelande aritmetisk operator
	// "Det som är till vänster om " = "Tilldelas det som är till häger"
	// EX:
	int i = 7;
	
	// Förändringsoperatorn
	int tal = 9;
	tal = (tal + 1); // 10
	tal++; // 11
	tal--; // 10
	// En finess
	int tal2 = tal++; // tal2 tilldelas 10, därefter ökar tal med 1 till 11
	int tal3 = ++tal; // tal ökar med 1 till 12, därefter tilldelas tal3 värdet 12

	return 0;
}
