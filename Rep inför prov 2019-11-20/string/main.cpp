// Klassen string
#include <string>
#include <iostream>
using namespace std;
int main() {
	
	string s;
	/* Vi behöver inte veta hur sor s kommer att
	vara */
	s = "Lerums Gymnasium";
	//s = "p";
	// Ett antal inbyggda "finesser"
	// eller metoder
	// Exempelvis föra att tareda på hur många tecken
	// strängen har.
	// För att hitta ett visst tecken
	// slå ihop flera strängar
	// m.m.
	// stränghantering med hjälp av index
	// s = "Lerums Gymnasium"
	int storlek = s.size();
	for (int i=0; i<storlek; i++)
       cout << s[i];
       
    cout << endl;
    
    cout << s << endl;
    
	
	
	
	
	
	

	return 0;
}
