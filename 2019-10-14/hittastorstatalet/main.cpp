/* Användaren matar in tre tal i ett
fält för heltal, programmet ska hitta det
största talet */
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int tal[3]; // Fältet deklareras
	for (int i=0; i<3; i++)
	{
	  cout << "Mata in tal " << (i+1)<<": ";
	  cin >> tal[i]; // Tilldelning av värden
    }
    // Kontrollutskrift
    cout<<tal[0]<<" "<<tal[1]<<" "<<tal[2]<<endl;
    int temp = tal[0];
    for (int i=1; i<3; i++)
    {
    	if (tal[i] > temp)
    	  temp = tal[i];
    }
    cout<<"Största värdet är " << temp<<endl;
	return 0;
}
