/*
15. Skapa ett program som unders�ker om ett heltal �r ett primtal
(Endast delbart med sig sj�lv och 1)
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	int prim;
	bool isprim = true;
	cout << "V�lj ett tal som ska unders�kas om det �r ett primtal: ";
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
			cout << prim << " �r ett primtal" << endl;
	else
	        cout << prim << " �r inget primtal" << endl;
		
	
	return 0;
	
}
