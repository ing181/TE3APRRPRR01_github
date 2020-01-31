// Uppgift 4, utan referensparameter och anrop till funktionen "utmatning" i main
// inga referensparametrar behöver användas.
// returvärdet från "inmatning" används i "utmatning"
#include <iostream>
#include <string>
using namespace std;
int inmatning(int falt[]);
void utmatning(int falt[], int antal);
int main() {
	setlocale(LC_ALL,"swedish");
	
	int falt[10];
	int antal = inmatning(falt); // Först körs den här funktionen...
    utmatning(falt,antal); // Returvärdet från "inmatning" används i "utmatning" som parameter
   
    // Man kan faktiskt skriva
    // utmatning(falt,inmatning(falt)); // Alltså en annan funktion som invärde (parameter)
    
	return 0;
}
int inmatning(int falt[])
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
