// STL Standard Template Library
// vector, dynamisk array med ett antal inbygda funktioner
#include <iostream>
#include <vector>
using namespace std;
void test(int x); 
				 
int main() {

	vector<int> minVector; // Deklarerar en vector f�r int
	vector<int>::iterator it; // Deklarerar en vektor-iterator f�r en int vektor. Anv�nder adresserna
	
	minVector.push_back(6); // L�gger till 6, vektorns size blir 1
	minVector.push_back(7); // L�gger till 7, vektorns size blir 2

    for (it=minVector.begin(); it != minVector.end(); it++)  // �r ett heltal s� det g�r att plussa med ett annat heltal
           cout << *it << endl;  // Visar det som finns p� adressen
           
    // Eller
    
    for (unsigned int i=0; i<minVector.size(); i++)
    		cout << minVector.at(i) << endl;  // Visar det som finns p� aktuellt index

	return 0;
}




