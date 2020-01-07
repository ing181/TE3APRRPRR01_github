/*
Uppgift 28
Varje årsskifte sätter Mio in x kronor på sitt bankkonto. Kontot är från början tomt.
Årsräntan är hela tiden y%. Hur mycket finns det på kontot inklusive ränta då det gått z år
efter den första insättningen och efter att Mio satt in sitt z:a belopp? 
Skriv ett program som returnerar behållningen. 
Kolla uppgift 13
*/
float holding(int ar, float insattning, float ranta);
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int ar;
	float insattning, ranta;
    cout << "Vilket belopp vill du spara varje år ";
    cin >> insattning;
    cout << "Vilken ränta har du (procent)? ";
    cin >> ranta;
    cout << "Hur många år kommer du att spara? ";
    cin >> ar;	
	cout << "Behållningen efter " << ar << " blir " << holding(ar, insattning, ranta) << endl;
		
	return 0;
}

float holding(int ar, float insattning, float ranta)
{
	float behallning = 0;
	ranta = ranta/100;
	ranta = ranta + 1;
	for (int i=0; i<=ar; i++)
	{
		behallning *= ranta; // Den årliga räntan (5%) läggs till
		behallning += insattning; // Mio sätter in 1000 kronor varje år
	}
	return behallning;
	
	return 0;
	
}

