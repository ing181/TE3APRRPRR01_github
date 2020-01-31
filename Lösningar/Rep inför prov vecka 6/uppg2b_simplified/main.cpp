// Uppgift 2b
#include <iostream>
#include <string>
using namespace std;
void meny(float temperatur[], int antal);
int matain(float temperatur[], int antal);  // Här returneras det nya (ökat med 1) värdet på antal.
void avlas(float temperatur[], int antal); // Här skall inte antal ändras, referensparameter behöver inte nvändas
int main() {
	
	// Så lite som möjligt i main
	setlocale(LC_ALL,"swedish");
	float temperatur[1000];
	int antal = 0;
	meny(temperatur,antal);

	
	return 0;
}

void meny(float temperatur[], int antal)
{
	cout << "ANTAL " << antal << endl;
	char val;
	cout << "Mata in en ny temperatur (n)" << endl;
	cout << "Avläs alla inmatade temperaturer (t)" << endl;
	cout << "Avbryt (a)" << endl;
	cin >> val;
	
	switch (val)
	{
		case 'n':
			matain(temperatur,antal);
			break;
		case 't':
			avlas(temperatur,antal);
			break;
		case 'a':
			cout << "Hej på dig!\n";
			break;
		defalt:
			cout << "Inkorrekt val";
			meny(temperatur,antal);
	}
}
	
int matain(float temperatur[], int antal)
{
	cout << "Mata in den nya temperaturen ";
	cin >> temperatur[antal];
	antal++;
	meny(temperatur,antal);
}
void avlas(float temperatur[], int antal)
{
	for (int i=0; i<antal; i++)
	    cout << temperatur[i] << " grader\n";
	    
	meny(temperatur,antal);
	
}

