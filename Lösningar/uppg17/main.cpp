/*
17. G�r ett program som fr�gar efter ett tal.
Efter inmatning unders�ker programmet talet och presenterar en utskrift
som meddelar om talet �r positivt, 0 eller negativt.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	double d;
	cout << "Mata in ett tal: ";
	cin >> d;
	if (d<0)
		cout << "Du matade in " << d << " vilket �r ett negativt tal" << endl;
	else if (d>0)
	    cout << "Du matade in " << d << " vilket �r ett positivt tal" << endl;
	else
	    cout << "Du matade in talet 0" << endl;
	
	return 0;
}
