/*
Uppgift 5
G�r ett program som omvandlar ett br�ktal till ett tal i blandad form En inmatning av talet 5/3
ska resultera i utskriften 1 2/3. En programk�rning kan se ut s� h�r:
Mata in t�ljare och n�mnare: 5 3
Talet 5/3 blir i blandad form 1 2/3
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    int t, n, rest;
    cout << "Mata in t�ljaren: ";
    cin >> t;
    cout << "Mata in n�mnaren: ";
    cin >> n;
    
    cout << t << "/" << n << " delar blir i blandad form " << t/n << "+" << t%n << "/" << n << endl;

	return 0;
}
