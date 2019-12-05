// Fält som parameter;
// Parameter = invärde
#include <iostream>
using namespace std;

void test(int falt[], int antal);
int main() {
	setlocale(LC_ALL,"swedish");
	int falt[1000];
	int antal;
	cout << "Hur många tal vill du mata in? (maximalt 100) ";
    cin >> antal;
    for (int i=0; i<antal; i++)
    {
    	cout << "Mata in tal " << (i+1) << ' ';
    	cin >> falt[i];
    }
/* 
	Fält som skickas till funktioner skickas alltid som referens.
	namnet på fältet är referensen
*/
    test(falt,antal); // Här skickas en referens till fält och
                      // antal kopieras till funktionen.
    // Skriver ut på skärmen efter att funktionen gjort sitt
    for (int i=0; i<antal; i++)
    	cout << falt[i] << ' ';
    	
    cout << endl;
	return 0;
}

void test(int falt[], int antal)
{
	 for (int i=0; i<antal; i++)
	 {
	 	falt[i] = falt[i] * (-1);
	 }
}
