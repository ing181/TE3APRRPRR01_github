/*
Uppgift 3
Skriv ett program som låter användaren mata in ett flyttal till en flyttalsvariabel.
Tilldela värdet till en heltalsvariabel. Skriv ut heltalsvariabel. Vad händer? Varför?
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	float f;
	int i;
	cout << "Mata in ett flyttal (decimaltal) ";
	cin >> f;
	i = f;  // Heltalsvariabeln tilldelas ett decimaltal (flyttal)
	cout << i << endl; // Eventuell decimaldel trunkeras (klipps bort)
	
	/* EX:
	   7.9 trunkeras till 7
	*/

	return 0;
}
