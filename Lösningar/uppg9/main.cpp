/*
Uppgift 9
F�r att vid en deklaration f� g�ra avdrag f�r dubbel bos�ttning kr�vs det att avst�ndet till arbetet �verstiger 50 km
och att arbetet varar h�gst ett �r f�r ensamst�ende och tre �r f�r sammanboende.
Konstruera ett program som l�ter anv�ndaren mata in aktuella data och som meddelar om
anv�ndaren har r�tt till ett skatteavdrag.
*/
#include <iostream>
using namespace std;
int main() {
	
	setlocale(LC_ALL,"swedish");
    int avstand;
	cout << "Hur l�ng har du til ditt jobb? (Svara med antalet hela km): ";
	cin >> avstand;
	
	if (avstand > 50)
	{
		 int manader;
		 char civilstand;
		 cout << "Hur l�nge t�nker du jobba? (Svara med antalet hela m�nader) ";
	     cin >> manader;
		 cout << "Sammanbor du med n�gon? (Svara \"j\" f�r ja eller \"n\" f�r nej)";
	     cin >> civilstand;
		 
		 if ( (civilstand == 'j')  && (manader <= 36) )
			 cout << "Du �r ber�ttigad till bidrag f�r dubbelt boende" << endl;
		 else if ( (civilstand == 'n')  && (manader <= 12) )
		     cout << "Du �r ber�ttigad till bidrag f�r dubbelt boende" << endl;
		 else
			 cout << "Du f�r tyv�rr inget bidrag f�r dubbelt boende, ditt arbete varar f�r l�nge" << endl;
		
		
		
	}
	else
		cout << "Du f�r tyv�rr inget bidrag f�r dubbelt boende, du bor f�r n�ra din arbetsplats" << endl;
	
	

}

