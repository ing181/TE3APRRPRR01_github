#include <iostream>
using namespace std;
int main() {
	float f;
	f = 4.3;
	cout << f << endl; // V�rdet
    cout << &f << endl; // Adressen i minnet
    // Om det �r n�got mycket st�rre
    // �n en float, kan man "peka p�"
    // platsen. Kan n� den fr�n
    // alla olika delar av programmet.
    // Du slipper kopiera!
    
    // En variabel som kan inneh�lla
    // adressen till en float
    float *pf;  // Lagrar adressen till en float
    pf = &f;
    cout << *pf << endl;
    
	return 0;
}
