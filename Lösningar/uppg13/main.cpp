/*
Uppgift 13
Varje �rsskifte s�tter Mio in 1000 kronor p� sitt bankkonto. Kontot �r fr�n b�rjan tomt.
�rsr�ntan �r hela tiden 5%. Hur mycket finns det p� kontot inklusive r�nta d� det g�tt 20 �r
efter den f�rsta ins�ttningen och efter att Mio satt in sitt 21:a belopp? 
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
		behallning *= ranta; // Den �rliga r�ntan (5%) l�ggs till
		behallning += insattning; // Mio s�tter in 1000 kronor varje �r
		cout << "Efter " << i << " �r finns det " << behallning << " kronor p� kontot" << endl;
	}
	return 0;
}
