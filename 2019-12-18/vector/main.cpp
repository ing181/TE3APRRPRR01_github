// Klassen vector, 13.7, sidan 122
#include <iostream>
#include <vector>
using namespace std;
int main() {
	
	float tal[100]; // Fixerat antal vid kompileringen
	
	// vector är en C++ klass som är en
	// container-klass. Används för att 
	// förvara data i. 
	// Innehållet kan variera under 
	// programmkörningen.
	// Kan endast innehålla datatypen
	// som anges när vectorn deklareras.
	
	vector<float> myVec; 
	myVec.push_back(3.1415);
	cout << myVec[0] << endl;
	
	
	return 0;
}
