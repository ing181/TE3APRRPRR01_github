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
double matain();
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
double matain()
{
	double x;
	cout << "Mata in ett tal ";
	cin >> x;
	return x;
}

double addera()
{
		double a, b;
		a = matain();
        b = matain();
		return (a+b);
}
double subtrahera()
{
		double a, b;
		a = matain();
        b = matain();
		return (a-b);
}
double multiplicera()
{
		double a, b;
		a = matain();
        b = matain();
		return (a*b);
}
double dividera()
{
		double a, b;
		a = matain();
        b = matain();
		return (a/b);
}

