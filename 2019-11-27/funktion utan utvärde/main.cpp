/*
En funktion som inte returnerar n�got alls 
*/
#include <string>
#include <iostream>
using namespace std; // Vi anv�nder iostream, string som tillh�r namnrymnden std
void mittNamn(string); 
void test();  //
int main() {
	setlocale(LC_ALL,"swedish");
	test(); // Funktionen anv�nds, anropas
	test(); // Funktionen anv�nds, anropas
	
	cout << "Vad heter du? ";
	string mittnamn;
	getline(cin,mittnamn);
	mittNamn(mittnamn); // Funktionen anv�nds, anropas
	
	return 0;
}
void test()
{
	cout << "Bla. bla bla" << endl;
}

void mittNamn(string namn)
{
	cout << "V�lkommen " << namn << endl;
}
