/*
15. Skapa ett program som undersöker om ett heltal är ett primtal
(Endast delbart med sig själv och 1)
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	int prim;
	bool isprim = true;
	cout << "Välj ett tal som ska undersökas om det är ett primtal: ";
	cin >> prim;
	for (int i=2; i<prim; i++)
	{
		
		if ( (prim % i) == 0 )  // Blir ingen rest vid division med i. Vi kan sluta kolla
		{
			isprim = false;
			break;
		}
		
		
	}
	
	if (isprim)
			cout << prim << " är ett primtal" << endl;
	else
	        cout << prim << " är inget primtal" << endl;
		
	
	return 0;
	
}
