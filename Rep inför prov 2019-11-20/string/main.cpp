// Klassen string
#include <string>
#include <iostream>
using namespace std;
int main() {
	
	string s;
	/* Vi beh�ver inte veta hur sor s kommer att
	vara */
	s = "Lerums Gymnasium";
	//s = "p";
	// Ett antal inbyggda "finesser"
	// eller metoder
	// Exempelvis f�ra att tareda p� hur m�nga tecken
	// str�ngen har.
	// F�r att hitta ett visst tecken
	// sl� ihop flera str�ngar
	// m.m.
	// str�nghantering med hj�lp av index
	// s = "Lerums Gymnasium"
	int storlek = s.size();
	for (int i=0; i<storlek; i++)
       cout << s[i];
       
    cout << endl;
    
    cout << s << endl;
    
	
	
	
	
	
	

	return 0;
}
