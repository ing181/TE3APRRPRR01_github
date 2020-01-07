/*
Uppgift 33
För att vid en deklaration få göra avdrag för dubbel bosättning krävs det att avståndet till arbetet överstiger 50 km och att arbetet varar högst ett år för ensamstående
och tre år för sammanboende. Konstruera ett program som låter användaren mata in aktuella data och som meddelar om användaren har rätt till ett skatteavdrag.
Använd en funktion som returnerar true eller false, beroende på om avdrag för dubbelt boende beviljas eller inte beviljas.
Kolla uppgift 9
*/

#include <iostream>
#include <string>
using namespace std;

bool ersattning(int avstand, int ar, bool sammanbor);

int main() {
	setlocale(LC_ALL,"swedish");
	int avstand;
	cout << "Hur lång har du til ditt jobb? (Svara med antalet hela km): ";
	cin >> avstand;
	int ar;
    cout << "Hur länge tänker du jobba? (Svara med antalet hela år) ";
    cin >> ar;
    bool sammanbor;
	cout << "Sammanbor du med någon? (Svara \"1\" för ja eller \"0\" för nej)";
	cin >> sammanbor;
	
	if (ersattning(avstand,ar,sammanbor))
	    cout << "Du får bidrag." << endl;
	else
		cout << "Tyvärr, du får INGET bidrag" << endl;
	

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


