/*
Välj räknesätt: +, -, *, /
*/

#include <iostream>
using namespace std;
// Funktionsdeklarationer 
char meny();
double addera();
double subtrahera();
double multiplicera();
double dividera();
int main() {
	setlocale(LC_ALL,"swedish");
	char mittval;
	double a, b;
	mittval = meny(); // Funktionen används (Anropas)
	// Användbara värden: + - * /
	switch (mittval)
	{
		case '+':
		cout << addera() << endl;
		break;
		
		case '-':
		cout << subtrahera() << endl;
		break;
		
		case '*':
		cout << multiplicera() << endl;
		break;	
		
		case '/':
		dividera();
		break;
		
		default:
		cout << "Du valde fel" << endl;	
	}
	
	return 0;
}

char meny()
{
	char val;
	cout << "Välj räknesätt" << endl;
	cout << "Addera (+)" << endl;
	cout << "Subtrahera (-)" << endl;
	cout << "Multiplicera (*)" << endl;
	cout << "Dividera (/)" << endl;
	cin >> val;
	return val;
}

double addera()
{
		double a, b;
		cout << "Mata in tal 1 ";
		cin >> a;
		cout << "Mata in tal 2 ";
		cin >> b;
		return (a+b);
}
double subtrahera()
{
		double a, b;
		cout << "Mata in tal 1 ";
		cin >> a;
		cout << "Mata in tal 2 ";
		cin >> b;
		return (a-b);
}
double multiplicera()
{
	    double a, b;
		cout << "Mata in tal 1 ";
		cin >> a;
		cout << "Mata in tal 2 ";
		cin >> b;
		return (a*b);
}
double dividera()
{
	    double a, b;
		cout << "Mata in tal 1 ";
		cin >> a;
		cout << "Mata in tal 2 ";
		cin >> b;
		return (a/b);
}

