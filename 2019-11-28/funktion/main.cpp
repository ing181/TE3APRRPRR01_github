// En funktion som kollar om ett tal är 
// positivt eller negativt
#include <iostream>
using namespace std;
char tecken(double tal); // Funktionsdeklaration
int main() {
    //cout << tecken(8.56) << endl;
    char tecknet = tecken(-8.56);
    cout << tecknet << endl;
	return 0;
}
char tecken(double tal) // Funktionsdefinition
{
	char sign;
	if (tal < 0)
		sign = '-';
	else
		sign = '+';
	// Skickar tillbaka till huvudprogrammet
	return sign;
}
