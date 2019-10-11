/*
En cirkus tillämpar olika priser för inträdet beroende på besökarens ålder.
Upp till och med 9 år och över 90 år är inträdet gratis. Är du äldre än 9 år och yngre än 90 kostar det 50 kronor.
Skriv ett program som beräknar vad besökaren ska betala.
Besökaren matar in sin ålder och programmet talar om vad det kostar. 
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	int ar;
    cout << "Hur många år är du? ";
    cin >> ar;
    
    if ( !(ar<=9) && !(ar>90) )
    {
    	
    	cout << "Välkommen! Det kostar 50 kr." << endl;
    	
    }
    else 
    {
    	
    	cout << "Välkommen, du går in gratis!" << endl;
    }
    
    
	return 0;
}
