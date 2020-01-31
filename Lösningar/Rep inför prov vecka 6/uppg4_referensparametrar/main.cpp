// Uppgift 4, med referensparameter och anrop till båda funktionerna i main
// pröva att ta bort & i funktionen inmatning
// Vad händer då?
// rad 15: antal får värdet 0
// rad 17: funktionen inmatning kommer inte att ändra värdet på antal
// antal har fortfarande värdet 0 när funktionen utmatning körs. Inget matas ut.
#include <iostream>
#include <string>
using namespace std;
void inmatning(int falt[], int &antal); 
void utmatning(int falt[], int antal);

int main() {
	setlocale(LC_ALL,"swedish");
	
	int falt[10];
	int antal = 0;
	inmatning(falt,antal); // Först körs den här funktionen...
	// "antal" har ändrats i funktionen "inmatning" och är inte längre 0
	utmatning(falt,antal); // ...När den är klar återvänder programmet till main och kör funktionen utmatning
	
	
	return 0;
}
void inmatning(int falt[], int &antal)
{
	cout << "Hur många tal vill du mata in? ";
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
