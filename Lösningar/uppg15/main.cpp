/*
Uppgift 15
Skapa ett program som skriver ut en talserie.
Anv�ndaren best�mmer vilket tal som talserien startar
och slutar med och antalet steg mellan talen.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int start, steg, slut;
	cout << "V�lj vilket heltal din talserie ska starta med: ";
	cin >> start;
	cout << "V�lj stegl�ngden mellan talen: ";
	cin >> steg;
	cout << "V�lj sista talet som talserien f�r inneh�lla: ";
	cin >> slut;
	
	if (start < slut)
	{
			for (int i=start; i<=slut; i+=steg)
			{
				cout << i << ' ';
			}
			cout << endl;
    }
    else if (start > slut)
	{
			for (int i=start; i>=slut; i-=steg)
			{
				cout << i << ' ';
			}
			cout << endl;
    }
    else
    {
    	cout << "Start stop �r samma, inte mycket till talserie" << endl;
    }

	return 0;

}
