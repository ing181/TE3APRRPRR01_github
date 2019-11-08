/*
Uppgift 9
För att vid en deklaration få göra avdrag för dubbel bosättning krävs det att avståndet till arbetet överstiger 50 km
och att arbetet varar högst ett år för ensamstående och tre år för sammanboende.
Konstruera ett program som låter användaren mata in aktuella data och som meddelar om
användaren har rätt till ett skatteavdrag.
*/
#include <iostream>
using namespace std;
int main() {
	
	setlocale(LC_ALL,"swedish");
    int avstand;
	cout << "Hur lång har du til ditt jobb? (Svara med antalet hela km): ";
	cin >> avstand;
	
	if (avstand > 50)
	{
		 int manader;
		 char civilstand;
		 cout << "Hur länge tänker du jobba? (Svara med antalet hela månader) ";
	     cin >> manader;
		 cout << "Sammanbor du med någon? (Svara \"j\" för ja eller \"n\" för nej)";
	     cin >> civilstand;
		 
		 if ( (civilstand == 'j')  && (manader <= 36) )
			 cout << "Du är berättigad till bidrag för dubbelt boende" << endl;
		 else if ( (civilstand == 'n')  && (manader <= 12) )
		     cout << "Du är berättigad till bidrag för dubbelt boende" << endl;
		 else
			 cout << "Du får tyvärr inget bidrag för dubbelt boende, ditt arbete varar för länge" << endl;
		
		
		
	}
	else
		cout << "Du får tyvärr inget bidrag för dubbelt boende, du bor för nära din arbetsplats" << endl;
	
	

}

