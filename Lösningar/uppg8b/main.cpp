/*
Uppgift 8 (version b)
En cirkus till�mpar olika priser f�r intr�det beroende p� bes�karens �lder.
Upp till och med 9 �r och �ver 90 �r �r intr�det gratis. �r du �ldre �n 9 �r och yngre �n 90 kostar det 50 kronor.
Skriv ett program som ber�knar vad bes�karen ska betala.
Bes�karen matar in sin �lder och programmet talar om vad det kostar. 
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	int ar;
    cout << "Hur m�nga �r �r du? ";
    cin >> ar;
    
    if ( !(ar<=9) && !(ar>90) )
    {
    	
    	cout << "V�lkommen! Det kostar 50 kr." << endl;
    	
    }
    else 
    {
    	
    	cout << "V�lkommen, du g�r in gratis!" << endl;
    }
    
    
	return 0;
}
