/*
En funktion som inte returnerar något alls 
*/
#include <string>
#include <iostream>
using namespace std; // Vi använder iostream, string som tillhör namnrymnden std
void mittNamn(string); 
void test();  //
int main() {
	setlocale(LC_ALL,"swedish");
	test(); // Funktionen används, anropas
	test(); // Funktionen används, anropas
	
	cout << "Vad heter du? ";
	string mittnamn;
	getline(cin,mittnamn);
	mittNamn(mittnamn); // Funktionen används, anropas
	
	return 0;
}
void test()
{
	cout << "Bla. bla bla" << endl;
}

void mittNamn(string namn)
{
	cout << "Välkommen " << namn << endl;
}
