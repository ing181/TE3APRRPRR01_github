/*
V�lj r�knes�tt: +, -, *, /
*/

#include <iostream>
using namespace std;
// Funktionsdeklarationer 
void meny();
double addera();
double subtrahera();
double multiplicera();
double dividera();
double matain();
void raknaut(char);
int main() {
	setlocale(LC_ALL,"swedish");

	meny(); // Funktionen anv�nds (Anropas)

	
	return 0;
}

// Funktionsdefinition (Vad funktionen g�r)
// Steg 1
void meny()
{
	char val;
	cout << "V�lj r�knes�tt" << endl;
	cout << "Addera (+)" << endl;
	cout << "Subtrahera (-)" << endl;
	cout << "Multiplicera (*)" << endl;
	cout << "Dividera (/)" << endl;
	cin >> val;
	raknaut(val);
}

// Steg 2
void raknaut(char mittval)
{
		// Anv�ndbara v�rden: + - * /
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
		cout << dividera() << endl;
		break;
		
		default:
		cout << "Du valde fel" << endl;	
	}
	
}

// Steg 3
double addera()
{
		double a, b;
		a = matain();
        b = matain();
		return (a+b);
}
// Steg 3
double subtrahera()
{
		double a, b;
		a = matain();
        b = matain();
		return (a-b);
}
// Steg 3
double multiplicera()
{
		double a, b;
		a = matain();
        b = matain();
		return (a*b);
}
// Steg 3
double dividera()
{
		double a, b;
		a = matain();
        b = matain();
		return (a / b);
}


// Steg 4
double matain()
{
	double x;
	cout << "Mata in ett tal ";
	cin >> x;
	return x;
}

