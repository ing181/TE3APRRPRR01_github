#include <iostream>
#include <stdlib.h>  // atoi() och isdigit()
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	// Deklarera variabler "på stacken"
	int i;
	char c;
	// Alla variabler som vi vill kunna använda måste deklareras innan kompileringen
	
	// Deklarera variabler "på heapen"
	// Dynamiskt deklarera, efter behov. Man deklarerar när det behövs och lämnar tillbaka till
	// operativsystemet när det inte längre behövs.
	
	string *s = new string; // En s.k pekare till en string deklareras. Pekaren innehåller adressen till innehållet i s
	                        // Man brukar säga att s "pekar på" innehållet i s
    // Man kan också skriva i två steg
    // string *s; // pekaren deklareras.
    // s = new string; // Här skapas plats för en string i RAM-minnet. En variabel som kan användas.
	*s = "dynamiskt allokerad";  // * betyder: "Det som finns på adressen som s pekar på" ges ett innehåll
	cout << s << endl;  // Adressen skrivs ut
	cout << *s << endl; // Vi kommer åt innehållet på adressen som s pekar på
	                    // "dynamiskt allokerad" skrivs ut
	// När vi är klara ska vi städa efter oss
	delete s; // Minnet frigörs. Lämnas över till operativsystemet.

	
	
	char tecken;
	cout << "Mata in ett tecken ";
    cin >> tecken;
    int tal;
    if (isdigit(tecken)) // Kollar om det inmatade tecknet är en siffra
         {
         	tal = atoi(&tecken);  // Omvandlar ett tecken till ett heltal, OBS! adressen till char-variabeln ska användas
         	                      // Se förklaring nedan.
         	cout << "En siffra! " << tal << endl;
         }
    else
            cout << tecken << " är ingen siffra" << endl;
            
            
            int tal1=7;
            cout << tal1 << endl;
            cout << &tal1 << endl;  // & gör att vi kommer åt adressen, var i RAM-minnet, variabeln tal är lagrad.
            int *t; // Vi deklarerar en variabel som kan innehålla adressen till en int
            t = &tal1;  // t lagrar nu adressen till variabeln tal
            cout << *t << endl;  // Vi skriver ut innehållet på adressen till variabeln tal, 7
            
            
	return 0;
	
}
