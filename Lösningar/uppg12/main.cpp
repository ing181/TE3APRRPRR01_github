/*
12. Varje �rsskifte s�tter Mio in 1000 kronor p� sitt bankkonto. Kontot �r fr�n b�rjan tomt.
�rsr�ntan �r hela tiden 5%.
Hur mycket finns det p� kontot inklusive r�nta d� det g�tt 20 �r efter den f�rsta ins�ttningen och
efter att Mio satt in sitt 21:a belopp? 
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	// R�ntan (5%) l�ggs till kapitalet. Kapitalet v�xer och 
	// 5% p� kapitalet blir mer och mer pengar, f�rutom
	// den �rliga ins�ttningen p� 1000 kronor.
	
	float kapital;
	for (int i=0; i<=20; i++)
	{
		kapital = kapital*1.05; // F�rst r�ntan p� kapitalet som har st�tt inne under �ret
		kapital = kapital + 1000; // D�refter s�tter Mio in 1000 kronor
		// Det �r ofta till stor hj�lp om man l�ter programmet skriva ut v�rdet p�
		// olika variabler under k�rningen, trotts att detta inte efterfr�gas i problemet man
		// sak l�sa. Man kan bara kommentera bort det n�r man ser att allt st�mmer.
		cout << "�r " << i << " efter den f�rsta ins�ttningen finns " << kapital << " kronor p� kontot" << endl; 
		
		
	}
	
	cout << "20 �r efter det f�rsta ins�ttningen p� kontot har Mio " << kapital << " kronor p� sitt konto" << endl;
	
	return 0;

}
