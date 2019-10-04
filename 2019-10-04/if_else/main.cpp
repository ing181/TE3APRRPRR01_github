// Brevport beroende av vikt 
// Vikt =< 20 gram kostar det 10 kr.
// Vikt > 20 gram och <= 100 gram kostar 20 kr.
// Vikt > 100 gram kostar 30 kr.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	double vikt, porto;
	cout << "Mata in vikten: ";
	cin >> vikt;
	if (vikt <= 20)
	 {
	 	porto = 10;
	 } else if (vikt <= 100)
	 {
	 	porto = 20;
	 }
	 else
	 {
	 	porto = 30;
	 }
	 
	cout << "Det kostar " << porto << 
	" kronor att skicka ditt brev som väger " << 
	vikt << " gram" << endl;
	
	

	return 0;
}
