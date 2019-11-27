#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	// Var finns variabeln?
	// Hämta temperaturen och räkna ut Kelvin
	int tmp, kelvin;
    cin >> tmp;
	//  Kontrollera om det kokar
	if (tmp < 100)
	{   int kalle = tmp - 273;
		cout << "Temperaturen är för låg" << endl;
	}
	cout << "I Celsius är temperaturen " << tmp << " och i Kelvin är temperaturen " << kelvin << endl; 
	return 0;
}
