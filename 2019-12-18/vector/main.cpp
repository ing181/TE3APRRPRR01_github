// Klassen vector, 13.7, sidan 122
#include <iostream>
#include <vector>
using namespace std;
int main() {
	
	float tal[100]; // Fixerat antal vid kompileringen
	
	// vector �r en C++ klass som �r en
	// container-klass. Anv�nds f�r att 
	// f�rvara data i. 
	// Inneh�llet kan variera under 
	// programmk�rningen.
	// Kan endast inneh�lla datatypen
	// som anges n�r vectorn deklareras.
	
	vector<float> myVec; 
	myVec.push_back(3.1415);
	cout << myVec[0] << endl;
	
	
	return 0;
}
