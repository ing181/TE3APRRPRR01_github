// Exempel 12.1 sidan 99
#include <iostream>
using namespace std;
// Ligger funktionsdefinitionen innan 
// main (huvudprogrammet)
// beh�vs ingen funktionsdeklaration
// Se ocks� Exempel 12.2
void HelloWorld() // Funktionsdefinition
{
	cout << "Hello World!" << endl;
}
int main() {
	
	HelloWorld();
	
	return 0;
}
