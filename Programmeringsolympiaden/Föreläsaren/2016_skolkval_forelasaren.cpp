//Programmeringsolympiaden 2016
// Skolkvalet
// UPPGIFT 1 � F�RVIRRAD F�REL�SARE
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int veckor,missade=0,tomma=0, forelasningar[9];
	cout << "Antal veckor: ";
	cin >> veckor;
	
	for (int i=0; i<veckor; i++)
	{
		cout << "Antalet f�rel�sningar vecka " << i+1 << ": ";
		cin >> forelasningar[i];
	}
	for (int i=0; i<veckor-1; i++)
	{
		if (forelasningar[i] > forelasningar[i+1])
			tomma=tomma+forelasningar[i]-forelasningar[i+1]; 
		if (forelasningar[i] < forelasningar[i+1])
			missade=missade+forelasningar[i+1]-forelasningar[i]; 
	}
	cout << "Tomma f�rel�sningar: " << tomma << endl;
	cout << "Missade f�rel�sningar: " << missade << endl;

	return 0;
}

