/*
Uppgift 15
Skapa ett program som skriver ut en talserie.
Användaren bestämmer vilket tal som talserien startar
och slutar med och antalet steg mellan talen.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int start, steg, slut;
	cout << "Välj vilket heltal din talserie ska starta med: ";
	cin >> start;
	cout << "Välj steglängden mellan talen: ";
	cin >> steg;
	cout << "Välj sista talet som talserien får innehålla: ";
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
    	cout << "Start stop är samma, inte mycket till talserie" << endl;
    }

	return 0;

}
