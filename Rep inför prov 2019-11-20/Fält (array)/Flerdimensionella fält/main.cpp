// Fält 
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int falt[2][2]; // Ett tvådemensionellt fält deklareras, tänk matris 2x2
	falt[0][0] = 55;
	falt[0][1] = 56;
	falt[1][0] = 65;
	falt[1][1] = 66;
	
	cout << falt[1][0] << endl;
	
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			// i=0 och j=0, i=0 och j=1, i=1 och j=0, i=1 och j=1
			cout << falt[i][j] << " "; //
		}
    }
	cout << endl;
	return 0;
}
