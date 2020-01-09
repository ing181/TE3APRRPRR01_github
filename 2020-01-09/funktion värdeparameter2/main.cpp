// Funktion med värdeparametrar
// Data KOPIERAS till funktionen
// parameter = argument = invärde
#include <iostream>
using namespace std;
// utvärde_datatyp namn(invvärde_datatyp,...);
float test(float);
int main() {
	
	float f = 1;
	//cout << test(f) << endl;
	// Variabeln f2 tilldelas värdet som returneras från funktionen
	// jämför
	// f2 = 3.3;
	float f2 = test(f);
	cout << f2 << endl;
	return 0;
}
float test(float f)
{
	f = f + 100;
	return f;
}

