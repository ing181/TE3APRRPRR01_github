#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	// Comparison Operators
	// == Equal to
	bool b;
	b = (6 != 7);
	cout << b << " 1 sant, 0 falskt" << endl;
	// Logiska operatorer
	// && och, and
	cout << "Utvärderas till " << ( (1==0) && (6<8) ) << endl; // 0
	// || eller, or
	cout << "Utvärderas till " << ( (1==0) || (6<8) ) << endl; // 1
    // ! icke, not
    // (inverterar sanningsvärdet)
    cout << "Utvärderas till " << ( (!(1==0)) && (6<8) ) << endl; // 1
	return 0;
}
