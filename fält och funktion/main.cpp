// F�lt som parameter;
// Parameter = inv�rde
#include <iostream>
using namespace std;

void test(int falt[], int antal);
int main() {
	setlocale(LC_ALL,"swedish");
	int falt[1000];
	int antal;
	cout << "Hur m�nga tal vill du mata in? (maximalt 100) ";
    cin >> antal;
    for (int i=0; i<antal; i++)
    {
    	cout << "Mata in tal " << (i+1) << ' ';
    	cin >> falt[i];
    }
/* 
	F�lt som skickas till funktioner skickas alltid som referens.
	namnet p� f�ltet �r referensen
*/
    test(falt,antal); // H�r skickas en referens till f�lt och
                      // antal kopieras till funktionen.
    // Skriver ut p� sk�rmen efter att funktionen gjort sitt
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
