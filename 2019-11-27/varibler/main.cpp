#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	// Var finns variabeln?
	// H�mta temperaturen och r�kna ut Kelvin
	int tmp, kelvin;
    cin >> tmp;
	//  Kontrollera om det kokar
	if (tmp < 100)
	{   int kalle = tmp - 273;
		cout << "Temperaturen �r f�r l�g" << endl;
	}
	cout << "I Celsius �r temperaturen " << tmp << " och i Kelvin �r temperaturen " << kelvin << endl; 
	return 0;
}
