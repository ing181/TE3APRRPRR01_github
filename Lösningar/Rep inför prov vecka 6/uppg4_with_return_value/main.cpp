// Uppgift 4, utan referensparameter och anrop till funktionen "utmatning" i main
// inga referensparametrar beh�ver anv�ndas.
// returv�rdet fr�n "inmatning" anv�nds i "utmatning"
#include <iostream>
#include <string>
using namespace std;
int inmatning(int falt[]);
void utmatning(int falt[], int antal);
int main() {
	setlocale(LC_ALL,"swedish");
	
	int falt[10];
	int antal = inmatning(falt); // F�rst k�rs den h�r funktionen...
    utmatning(falt,antal); // Returv�rdet fr�n "inmatning" anv�nds i "utmatning" som parameter
   
    // Man kan faktiskt skriva
    // utmatning(falt,inmatning(falt)); // Allts� en annan funktion som inv�rde (parameter)
    
	return 0;
}
int inmatning(int falt[])
{
	int antal;
	cout << "Hur m�nga tal vill du mata in? ";
	cin >> antal;
	
	for (int i=0; i<antal; i++)
	{
		cout << "Mata in tal " << i << " ";
		cin >> falt[i];
		
	}
	cout << "Du matade in " << antal << " tal" << endl;
	return antal;
}

void utmatning(int falt[], int antal)
{
	for (int i=0; i<antal; i++)
	{
		cout << falt[i] <<" ";
		
		
	}
	cout << endl;
}
