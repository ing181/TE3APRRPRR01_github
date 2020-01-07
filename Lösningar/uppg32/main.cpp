/*
Uppgift 32
Använde funktionerna du skapat i uppgifterna 30 och 31 i huvudprogrammet. (Anropa funktionerna i huvudprogrammet.) (1, 2 och 3)
*/

#include <iostream>
#include <string>
using namespace std;
// 1
float rektangel(float bredd, float hojd);

// 2
void fornamn(string namn);

// 3
void langdVikt(float &langd, float &vikt);

int main() {
	setlocale(LC_ALL,"swedish");
	
	// 1
	float b, h;
	cout << "Rektangelns bredd: ";
	cin >> b;
	cout << "Rektangelns höjd: ";
	cin >> h;	
	float arean = rektangel(b,h);
	cout << "Arean blir " << arean << endl;
	
	// 2
	string fnamn;
	cout << "Vad heter du (föramn)? ";
	cin >> fnamn;
	fornamn(fnamn);
	
	// 3
	float l, v;
	langdVikt(l,v);
	cout << "Du är " << l << " cm lång och väger " << v << " kilo." << endl;
	
	

	return 0;
}

// 1
float rektangel(float bredd, float hojd)
{
	float area = bredd*hojd;
	return area;
}

// 2
void fornamn(string namn)
{
	cout << "Välkommen " << namn << endl;
}

// 3
void langdVikt(float &langd, float &vikt)
{
	cout << "Hur lång är du? (cm) ";
	cin >> langd;
	cout << "Hur mycket väger du? (kg) ";
	cin >> vikt;
}
