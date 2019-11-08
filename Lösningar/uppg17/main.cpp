/*
Uppgift 17
Skriv ett program som läser in fyra heltal i ett fält.
Därefter ska talen byta plats i fältet så att de står i omvänd ordning.
Avsluta programmet med en utskrift av fältet.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int talfalt[4]; // Ett fält, array, med plats för fyra stycken "intar" deklareras
	// Användaren matar in 4 tal
	for (int i=0; i<4; i++)
	{
		cout << "Mata in talet med index " << i << ": ";
		cin >> talfalt[i];
	}
	
	for (int i=0; i<4; i++)
	{
		cout << "Du matade in " << talfalt[i] << " på plats " << i << endl;
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
		cout << "Efter platsbytet " << talfalt[i] << " på plats " << i << endl;
	}
	
	// Platsbyte med hjälp av en forsats
	// Fungerar med fält som har ett jämnt antal platser
	
	for (int i=0,j=3; i<2; i++, j--)
	{
		temp=talfalt[i];
		talfalt[i]=talfalt[j];
		talfalt[j]=temp;
		
	}

	for (int i=0; i<4; i++)
	{
		cout << "Efter platsbyte tillbaka igen " << talfalt[i] << " på plats " << i << endl;
	}
	
	
	// När det är stora talfält är det lämpligt
	// att använda en algoritm som man vet alltid fungerar
	
    int tf[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    cout << "Talfältet tf: ";
    for (int i=0; i<15; i++)
	{
		cout << tf[i] << " ";
	}
	cout << endl;
	
	// Vi byter tills vi komer till mitten
	for (int i=0,j=14; i<8; i++, j--) // Vi vänder på talfältet tf
	{
		temp=tf[i];
		tf[i]=tf[j];
		tf[j]=temp;
		
	}
	cout << "Talfältet tf (i omvänd ordning): ";
    for (int i=0; i<15; i++)
	{
		cout << tf[i] << " ";
	}
	cout << endl;
	
	return 0;
}
