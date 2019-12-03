#include <iostream>
using namespace std;
char meny();
	// På samma sätt med övriga räknesätt
double addera(double, double);

int main() {
	
	double a, b;
	char val = meny();
	cout << "Mata i tal 1: ";
	cin >> a;
	cout << "Mata i tal 2: ";
	cin >> b;	
	
	switch (val)
	{
		case '+':
		cout << addera(a,b) << endl;
		break;
	}
	// På samma sätt med övriga räknesätt
	
	return 0;
}

char meny()
{
	char mittval;
	cout << "Valj raknesatt" << endl;
	cout << "Plus (+)" << endl;
	cout << "Minus (-)" << endl;
	cout << "Ganger (*)" << endl;
	cout << "Delat med (/)" << endl;
	cin >> mittval;
	return mittval;
}

double addera(double a, double b)
{
	return (a+b);
}
	// På samma sätt med övriga räknesätt
