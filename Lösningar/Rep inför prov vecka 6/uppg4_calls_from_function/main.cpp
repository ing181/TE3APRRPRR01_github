// Uppgift 4, utan referensparameter och anrop till funktionen utmatning i funktionen inmatning
// inga referensparametrar behöver användas.
#include <iostream>
#include <string>
using namespace std;
void inmatning(int falt[]);
void utmatning(int falt[], int antal);
int main() {
	setlocale(LC_ALL,"swedish");
	
	int falt[10];
	inmatning(falt); // Enda funktionen som körs från main

	return 0;
}
void inmatning(int falt[])
{
	int antal;
	cout << "Hur många tal vill du mata in? ";
	cin >> antal;
	
	for (int i=0; i<antal; i++)
	{
		cout << "Mata in tal " << i << " ";
		cin >> falt[i];
		
	}
	cout << "Du matade in " << antal << " tal" << endl;
	
	// Här skickas antal vidare till nästa funktion
	utmatning(falt,antal);
}

void utmatning(int falt[], int antal)
{
	for (int i=0; i<antal; i++)
	{
		cout << falt[i] <<" ";
		
		
	}
	cout << endl;
}
