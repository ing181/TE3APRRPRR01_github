/*
Uppgift 31
Skapa funktionsdefinitioner som utför det som deklarationerna i uppgift 30 deklarerar. (1, 2 och 3)
*/

// 1
float rektangel(float bredd, float hojd);

// 2
void fornamn(string namn);

// 3
void langdVikt(float &langd, float &vikt);
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");

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
	cout << namn << endl;
}

// 3
void langdVikt(float &langd, float &vikt)
{
	cout << "Hur lång är du? (cm) ";
	cin >> langd;
	cout << "Hur mycket väger du? (kg) ";
	cin >> vikt;
}
