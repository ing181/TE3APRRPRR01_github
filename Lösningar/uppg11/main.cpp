// Skriv en while-sats och en for-sats som skriver ut talen
// -10, -8, -6, -4, -2 och 0

#include <iostream>
using namespace std;
int main() {
	
	// m+=2 samma sak som m=m+2
	for (int m=(-10); m<=0; m+=2)
	{
		cout << m << " ";
	}
	cout << endl;
	
	// I omvänd ordning
	int m=0;
	while ( m >= (-10) )
	{
		cout << m << " ";
		m-=2;
	}
	cout << endl;
	// eller
	m = (-10);
	while ( m <= 0 )
	{
		cout << m << " ";
		m+=2;
	}
	cout << endl;
	
	return 0;
}
