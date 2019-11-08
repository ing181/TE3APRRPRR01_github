/*
Uppgift 17
Skriv ett program som l�ser in fyra heltal i ett f�lt.
D�refter ska talen byta plats i f�ltet s� att de st�r i omv�nd ordning.
Avsluta programmet med en utskrift av f�ltet.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int talfalt[4]; // Ett f�lt, array, med plats f�r fyra stycken "intar" deklareras
	// Anv�ndaren matar in 4 tal
	for (int i=0; i<4; i++)
	{
		cout << "Mata in talet med index " << i << ": ";
		cin >> talfalt[i];
	}
	
	for (int i=0; i<4; i++)
	{
		cout << "Du matade in " << talfalt[i] << " p� plats " << i << endl;
	}
	
	// Platsbyte
	int temp;
	
	temp=talfalt[0];
	talfalt[0]=talfalt[3];
	talfalt[3]=temp;
	temp=talfalt[1];
	talfalt[1]=talfalt[2];
	talfalt[2]=temp;
	
	for (int i=0; i<4; i++)
	{
		cout << "Efter platsbytet " << talfalt[i] << " p� plats " << i << endl;
	}
	
	// Platsbyte med hj�lp av en forsats
	// Fungerar med f�lt som har ett j�mnt antal platser
	
	for (int i=0,j=3; i<2; i++, j--)
	{
		temp=talfalt[i];
		talfalt[i]=talfalt[j];
		talfalt[j]=temp;
		
	}

	for (int i=0; i<4; i++)
	{
		cout << "Efter platsbyte tillbaka igen " << talfalt[i] << " p� plats " << i << endl;
	}
	
	
	// N�r det �r stora talf�lt �r det l�mpligt
	// att anv�nda en algoritm som man vet alltid fungerar
	
    int tf[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    cout << "Talf�ltet tf: ";
    for (int i=0; i<15; i++)
	{
		cout << tf[i] << " ";
	}
	cout << endl;
	
	// Vi byter tills vi komer till mitten
	for (int i=0,j=14; i<8; i++, j--) // Vi v�nder p� talf�ltet tf
	{
		temp=tf[i];
		tf[i]=tf[j];
		tf[j]=temp;
		
	}
	cout << "Talf�ltet tf (i omv�nd ordning): ";
    for (int i=0; i<15; i++)
	{
		cout << tf[i] << " ";
	}
	cout << endl;
	
	return 0;
}
