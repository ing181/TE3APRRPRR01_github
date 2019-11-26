// Om variablers räckvidd?
#include <iostream>
using namespace std;
int main() {
	// Var finns variabeln?
	for (int i=0; i<5; i++) // Här deklareras i
	{
		cout << i << endl; // Här används i Detta "i"
						   // finns bara i for-satsen
	}
	
	int i=99; // Inte samma i som i for-satsen
	cout << i << endl;
	if (3==3)
	{
		int i = 3; // En ny variabel igen, finns bara i if-satsen
		cout << i << endl;
	}


	return 0;
}
