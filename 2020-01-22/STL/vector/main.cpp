// STL Standard Template Library
// vector, dynamisk array med ett antal inbygda funktioner
#include <iostream>
#include <vector>
using namespace std;
void test(int x); 
				 
int main() {

	vector<int> minVector; // Deklarerar en vector för int
	vector<int>::iterator it; // Deklarerar en vektor-iterator för en int vektor. Använder adresserna
	
	minVector.push_back(6); // Lägger till 6, vektorns size blir 1
	minVector.push_back(7); // Lägger till 7, vektorns size blir 2

    for (it=minVector.begin(); it != minVector.end(); it++)  // Är ett heltal så det går att plussa med ett annat heltal
           cout << *it << endl;  // Visar det som finns på adressen
           
    // Eller
    
    for (unsigned int i=0; i<minVector.size(); i++)
    		cout << minVector.at(i) << endl;  // Visar det som finns på aktuellt index

	return 0;
}




