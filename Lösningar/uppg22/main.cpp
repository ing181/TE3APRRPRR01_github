/*
Uppgift 22
Skriv ett program som läser in ett klockslag på formen hh:mm
till exempel 15:36 och lagrar det i en string-variabel tid. 
Dela upp tid i två delsträngar timme och minut med hjälp av
metoden substr och skriv sedan ut strängarnas innehåll.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	string tid, h, m;
	cout << "Skriv in ett klockslag (hh:mm) ";
	cin >> tid;
	// Du vet positionerna i strängen "tid" som du ska plocka ut ifrån
	h = tid.substr(0,2); // Plockar ut och lägger de två första tecknen i variabeln h.
	                     // Startar i position 0 och längden är 2 tecken
	m = tid.substr(3,2); // Plockar ut och lägger de två sista tecknen i variabeln m.
	                     // Startar i position 3 och längden är 2 tecken
	                     
    cout << "Du matade in tiden " << m << " minuter efter " << h << endl;
    
	return 0;
}
