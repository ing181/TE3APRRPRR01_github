// if
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	int a=2;
	int b=3;
	if ( (a>2) || (b==3) )
	{
		cout << "Sant" << endl;
	}
	else if (2==2)
	{
		cout << "Också sant" << endl;
	}
	else
	{
		cout << "Falskt" << endl;
	}

	return 0;
}
