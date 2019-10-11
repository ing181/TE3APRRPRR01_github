/*
Gör ett program som omvandlar ett bråktal till ett tal i blandad form En inmatning av talet 5/3
ska resultera i utskriften 1 2/3. En programkörning kan se ut så här:
Mata in täljare och nämnare: 5 3
Talet 5/3 blir i blandad form 1 2/3
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    int t, n, rest;
    cout << "Mata in täljaren: ";
    cin >> t;
    cout << "Mata in nämnaren: ";
    cin >> n;
    
    cout << t << "/" << n << " delar blir i blandad form " << t/n << "+" << t%n << "/" << n << endl;

	return 0;
}
