/*
Uppgift 28
Varje �rsskifte s�tter Mio in x kronor p� sitt bankkonto. Kontot �r fr�n b�rjan tomt.
�rsr�ntan �r hela tiden y%. Hur mycket finns det p� kontot inklusive r�nta d� det g�tt z �r
efter den f�rsta ins�ttningen och efter att Mio satt in sitt z:a belopp? 
Skriv ett program som returnerar beh�llningen. 
Kolla uppgift 13
*/
float holding(int ar, float insattning, float ranta);
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int ar;
	float insattning, ranta;
    cout << "Vilket belopp vill du spara varje �r ";
    cin >> insattning;
    cout << "Vilken r�nta har du (procent)? ";
    cin >> ranta;
    cout << "Hur m�nga �r kommer du att spara? ";
    cin >> ar;	
	cout << "Beh�llningen efter " << ar << " blir " << holding(ar, insattning, ranta) << endl;
		
	return 0;
}

float holding(int ar, float insattning, float ranta)
{
	float behallning = 0;
	ranta = ranta/100;
	ranta = ranta + 1;
	for (int i=0; i<=ar; i++)
	{
		behallning *= ranta; // Den �rliga r�ntan (5%) l�ggs till
		behallning += insattning; // Mio s�tter in 1000 kronor varje �r
	}
	return behallning;
	
	return 0;
	
}

