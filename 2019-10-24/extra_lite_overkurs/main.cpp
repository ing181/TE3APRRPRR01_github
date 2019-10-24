#include <iostream>
#include <stdlib.h>  // atoi() och isdigit()
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	// Deklarera variabler "p� stacken"
	int i;
	char c;
	// Alla variabler som vi vill kunna anv�nda m�ste deklareras innan kompileringen
	
	// Deklarera variabler "p� heapen"
	// Dynamiskt deklarera, efter behov. Man deklarerar n�r det beh�vs och l�mnar tillbaka till
	// operativsystemet n�r det inte l�ngre beh�vs.
	
	string *s = new string; // En s.k pekare till en string deklareras. Pekaren inneh�ller adressen till inneh�llet i s
	                        // Man brukar s�ga att s "pekar p�" inneh�llet i s
    // Man kan ocks� skriva i tv� steg
    // string *s; // pekaren deklareras.
    // s = new string; // H�r skapas plats f�r en string i RAM-minnet. En variabel som kan anv�ndas.
	*s = "dynamiskt allokerad";  // * betyder: "Det som finns p� adressen som s pekar p�" ges ett inneh�ll
	cout << s << endl;  // Adressen skrivs ut
	cout << *s << endl; // Vi kommer �t inneh�llet p� adressen som s pekar p�
	                    // "dynamiskt allokerad" skrivs ut
	
	// F�r att anv�nda metoder hos dynamiskt deklarerade objekt anv�nds -> i st�llet f�r .
	cout << s->size() << endl;
	
	// N�r vi �r klara ska vi st�da efter oss
	delete s; // Minnet frig�rs. L�mnas �ver till operativsystemet.

	
	
	char tecken;
	cout << "Mata in ett tecken ";
    cin >> tecken;
    int tal;
    if (isdigit(tecken)) // Kollar om det inmatade tecknet �r en siffra
         {
         	tal = atoi(&tecken);  // Omvandlar ett tecken till ett heltal, OBS! adressen till char-variabeln ska anv�ndas
         	                      // Se f�rklaring nedan.
         	cout << "En siffra! " << tal << endl;
         }
    else
            cout << tecken << " �r ingen siffra" << endl;
            
            
            int tal1=7;
            cout << tal1 << endl;
            cout << &tal1 << endl;  // & g�r att vi kommer �t adressen, var i RAM-minnet, variabeln tal �r lagrad.
            int *t; // Vi deklarerar en variabel som kan inneh�lla adressen till en int
            t = &tal1;  // t lagrar nu adressen till variabeln tal
            cout << *t << endl;  // Vi skriver ut inneh�llet p� adressen till variabeln tal, 7
            
            
	return 0;
	
}

