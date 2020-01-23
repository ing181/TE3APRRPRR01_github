/*
Låt användaren mata in ett namn på en person som lagras i en string variabel. 
Låt användaren mata in en bokstav (1)
Låt användaren mata in en bokstav (2)

Skapa en funktion med den här funktionsdeklarationen
string byt(string in, char old_char, char new_char);

Funktionen ska byta alla förekomster av bokstav (1) mot bokstav (2) och returnera den 
ändrade strängen.

*/

#include <iostream>
#include <string>
using namespace std;
string byt(string in, char old_char, char new_char);
int main() {
	
	setlocale(LC_ALL,"swedish");
	string namn;
	char gammal, ny;
	cout << "Mata in ett namn ";
	getline(cin,namn);
	cout << "Mata in bokstaven du vill byta ut ";
	cin >> gammal;
	cout << "Mata in bokstaven du vill byta till ";
	cin >> ny;	
	string nytt_namn = byt(namn,gammal,ny);
	cout << "Namnet är ändrat till " << nytt_namn << endl;
	
}
string byt(string in, char old_char, char new_char)
{
	int langd = in.size();
	for (int i=0; i<langd; i++)
	{
		if (in[i] == old_char)
			in[i] = new_char;
		
	}
	
	return in;
}

