// Funktion med v�rdeparametrar
// Data KOPIERAS till funktionen
// parameter = argument = inv�rde
#include <iostream>
using namespace std;
// utv�rde_datatyp namn(invv�rde_datatyp,...);
float test(float);
int main() {
	
	float f = 1;
	//cout << test(f) << endl;
	// Variabeln f2 tilldelas v�rdet som returneras fr�n funktionen
	// j�mf�r
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

