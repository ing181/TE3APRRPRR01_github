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

    // Fånga in brev som väger
    // 20 - 100 gram
	if ( (vikt >= 20) && (vikt <= 100) )
	{
		porto = 20;
	}
	else if (vikt < 20)
	{
		porto = 10;
    }
    else 
    {
    	porto = 30;
    }
	
	cout << "Portot för ditt brev på " << vikt << " gram kostar " << porto << " kronor" << endl;
	
	

	return 0;
}
