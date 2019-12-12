// H�r Deklareras funktionen
// utv�rde namn(inv�rde, inv�rde, ...);
// utv�rdets datatyp, inv�rdets datatyp
// EX char, int, ...
// �ven utv�rdet void (Inget utv�rde alls)
/*
inv�rde = parameter = argument
utv�rde = returv�rde
*/

#include <iostream>
using namespace std;
int test(); // Funkttionsdeklaration
int test2(int y); // Funkttionsdeklaration
void test3(string); // Funkttionsdeklaration
void test4(int); // Funkttionsdeklaration
int main() {

    int a = 7;
    int b = a;
	int x = test();
    cout << x << endl;
    cout << "HEJ" << endl;
    int p = 3;
    cout << test2(p) << endl;
    cout << "HEJ" << endl;
    test3("Kalle");
    cout << "HEJ" << endl;
    test4(-8);
    
	return 0;
}

int test()
{
	return 5;
}
int test2(int y)
{
	
	int summa = y + 1;
	return summa;
}
void test3(string s)
{
	cout << "V�lkommen till lektionen " << s << endl;
	return;
}
void test4(int tal)
{
	if (tal < 0)
	    return;
	cout << "Du matade in ett positivt tal" << endl;
}
