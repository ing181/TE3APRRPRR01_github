/*
Uppgift 13
Varje årsskifte sätter Mio in 1000 kronor på sitt bankkonto. Kontot är från början tomt.
Årsräntan är hela tiden 5%. Hur mycket finns det på kontot inklusive ränta då det gått 20 år
efter den första insättningen och efter att Mio satt in sitt 21:a belopp? 
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	const int insattning = 1000;
	const float ranta = 1.05;
	float behallning = 0;
	for (int i=0; i<=21; i++)
	{
		behallning *= ranta; // Den årliga räntan (5%) läggs till
		behallning += insattning; // Mio sätter in 1000 kronor varje år
	cout << "Efter " << i << " år finns det " << behallning << " kronor på kontot" << endl;
	}
	
	return 0;
}
