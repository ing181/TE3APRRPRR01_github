// Return fr�n en void funktion

#include <iostream>
using namespace std;
void test(int x); 
				 
int main() {

	test(11);


	return 0;
}

void test(int x)
{
	cout << x << endl;
	if ( x < 10 )
	   return;

	cout << "x �r st�rre eller lika med 10" << endl;
	
}


