// Exempel 12.1 sidan 99
#include <iostream>
using namespace std;
// Ligger funktionsdefinitionen innan 
// main (huvudprogrammet)
// behövs ingen funktionsdeklaration
// Se också Exempel 12.2
void HelloWorld() // Funktionsdefinition
{
	cout << "Hello World!" << endl;
}
int main() {
	
	HelloWorld();
	
	return 0;
}
