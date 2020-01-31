// Uppgift 4, med referensparameter och anrop till b�da funktionerna i main
// pr�va att ta bort & i funktionen inmatning
// Vad h�nder d�?
// rad 15: antal f�r v�rdet 0
// rad 17: funktionen inmatning kommer inte att �ndra v�rdet p� antal
// antal har fortfarande v�rdet 0 n�r funktionen utmatning k�rs. Inget matas ut.
#include <iostream>
#include <string>
using namespace std;
void inmatning(int falt[], int &antal); 
void utmatning(int falt[], int antal);

int main() {
	setlocale(LC_ALL,"swedish");
	
	int falt[10];
	int antal = 0;
	inmatning(falt,antal); // F�rst k�rs den h�r funktionen...
	// "antal" har �ndrats i funktionen "inmatning" och �r inte l�ngre 0
	utmatning(falt,antal); // ...N�r den �r klar �terv�nder programmet till main och k�r funktionen utmatning
	
	
	return 0;
}
void inmatning(int falt[], int &antal)
{
	cout << "Hur m�nga tal vill du mata in? ";
	cin >> antal;
	
	for (int i=0; i<antal; i++)
	{
		cout << "Mata in tal " << i << " ";
		cin >> falt[i];
		
	}
	cout << "Du matade in " << antal << " tal" << endl;
	
}

void utmatning(int falt[], int antal)
{
	for (int i=0; i<antal; i++)
	{
		cout << falt[i] <<" ";
		
		
	}
	cout << endl;
}
