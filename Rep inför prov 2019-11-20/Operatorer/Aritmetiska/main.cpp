// Aritmetiska operatorer
#include <iostream>
using namespace std;
int main() {
	
	// +, -, *, /
	// Fungerar som man t�nker sig
	// S�tt paranteser runt det som 
	// ska ske
	// % Modulusoperatorn
	// Anv�nds vid heltalsoperationer (int)
	// Returnerar ("Kommer ut ifr�n")
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
	// "Det som �r till v�nster om " = "Tilldelas det som �r till h�ger"
	// EX:
	int i = 7;
	
	// F�r�ndringsoperatorn
	int tal = 9;
	tal = (tal + 1); // 10
	tal++; // 11
	tal--; // 10
	// En finess
	int tal2 = tal++; // tal2 tilldelas 10, d�refter �kar tal med 1 till 11
	int tal3 = ++tal; // tal �kar med 1 till 12, d�refter tilldelas tal3 v�rdet 12

	return 0;
}
