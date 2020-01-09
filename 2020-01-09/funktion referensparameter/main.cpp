// Funktion med referensparameterparametrar
// SAMMA DATA i funktionen och i main
// parameter = argument = invärde
#include <iostream>
using namespace std;
// utvärde_datatyp namn(invvärde_datatyp,...);
float test(float &);
int main() {
	float f = 66.88;
	cout << f << endl; // Skriver ut 66.88
	cout << test(f) << endl; // Skriver ut 3.33
	cout << f << endl; // Skriver ut 1

	return 0;  
}
float test(float &f)
{
	f = 1;
	return 3.33;
}

