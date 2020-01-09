// Funktion med värdeparametrar
// Data KOPIERAS till funktionen
// parameter = argument = invärde
#include <iostream>
using namespace std;
// utvärde_datatyp namn(invvärde_datatyp,...);
void test();
void test2(float f);
int main() {
	cout << 1 << endl;
    test();
    float flyt = 6.99;
    test2(flyt);
    cout << 2 << endl;
	return 0;
}
void test()
{
	cout << "HEJ" << endl;
}
void test2(float f)
{
	cout << f << endl;
}
