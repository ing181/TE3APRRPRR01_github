#include <iostream>
using namespace std;
int main() {
	float f;
	f = 4.3;
	cout << f << endl; // Värdet
    cout << &f << endl; // Adressen i minnet
    // Om det är något mycket större
    // än en float, kan man "peka på"
    // platsen. Kan nå den från
    // alla olika delar av programmet.
    // Du slipper kopiera!
    
    // En variabel som kan innehålla
    // adressen till en float
    float *pf;  // Lagrar adressen till en float
    pf = &f;
    cout << *pf << endl;
    
	return 0;
}
