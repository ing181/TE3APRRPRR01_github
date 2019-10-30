/*
17. Gör ett program som frågar efter ett tal.
Efter inmatning undersöker programmet talet och presenterar en utskrift
som meddelar om talet är positivt, 0 eller negativt.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	double d;
	cout << "Mata in ett tal: ";
	cin >> d;
	if (d<0)
		cout << "Du matade in " << d << " vilket är ett negativt tal" << endl;
	else if (d>0)
	    cout << "Du matade in " << d << " vilket är ett positivt tal" << endl;
	else
	    cout << "Du matade in talet 0" << endl;
	
	return 0;
}
