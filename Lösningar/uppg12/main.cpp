/*
12. Varje årsskifte sätter Mio in 1000 kronor på sitt bankkonto. Kontot är från början tomt.
Årsräntan är hela tiden 5%.
Hur mycket finns det på kontot inklusive ränta då det gått 20 år efter den första insättningen och
efter att Mio satt in sitt 21:a belopp? 
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	// Räntan (5%) läggs till kapitalet. Kapitalet växer och 
	// 5% på kapitalet blir mer och mer pengar, förutom
	// den årliga insättningen på 1000 kronor.
	
	float kapital;
	for (int i=0; i<=20; i++)
	{
		kapital = kapital*1.05; // Först räntan på kapitalet som har stått inne under året
		kapital = kapital + 1000; // Därefter sätter Mio in 1000 kronor
		// Det är ofta till stor hjälp om man låter programmet skriva ut värdet på
		// olika variabler under körningen, trotts att detta inte efterfrågas i problemet man
		// sak lösa. Man kan bara kommentera bort det när man ser att allt stämmer.
		cout << "År " << i << " efter den första insättningen finns " << kapital << " kronor på kontot" << endl; 
		
		
	}
	
	cout << "20 år efter det första insättningen på kontot har Mio " << kapital << " kronor på sitt konto" << endl;
	
	return 0;

}
