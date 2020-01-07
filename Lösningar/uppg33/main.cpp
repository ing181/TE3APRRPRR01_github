/*
Uppgift 33
F�r att vid en deklaration f� g�ra avdrag f�r dubbel bos�ttning kr�vs det att avst�ndet till arbetet �verstiger 50 km och att arbetet varar h�gst ett �r f�r ensamst�ende
och tre �r f�r sammanboende. Konstruera ett program som l�ter anv�ndaren mata in aktuella data och som meddelar om anv�ndaren har r�tt till ett skatteavdrag.
Anv�nd en funktion som returnerar true eller false, beroende p� om avdrag f�r dubbelt boende beviljas eller inte beviljas.
Kolla uppgift 9
*/

#include <iostream>
#include <string>
using namespace std;

bool ersattning(int avstand, int ar, bool sammanbor);

int main() {
	setlocale(LC_ALL,"swedish");
	int avstand;
	cout << "Hur l�ng har du til ditt jobb? (Svara med antalet hela km): ";
	cin >> avstand;
	int ar;
    cout << "Hur l�nge t�nker du jobba? (Svara med antalet hela �r) ";
    cin >> ar;
    bool sammanbor;
	cout << "Sammanbor du med n�gon? (Svara \"1\" f�r ja eller \"0\" f�r nej)";
	cin >> sammanbor;
	
	if (ersattning(avstand,ar,sammanbor))
	    cout << "Du f�r bidrag." << endl;
	else
		cout << "Tyv�rr, du f�r INGET bidrag" << endl;
	

	return 0;
}


bool ersattning(int avstand, int ar, bool sammanbor)
{
	if (avstand > 50)
	{
		 
		 if ( (sammanbor == 1)  && (ar <= 3) )
			 return true;
		 else if ( (sammanbor == 0)  && (ar <= 1) )
		     return true;
		 else
			 return false;
	}
	else
		return false;
}


