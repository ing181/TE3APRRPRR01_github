// Uppgift 2a
#include <iostream>
#include <string>
using namespace std;
void meny(float temperatur[], int antal);
void matain(float temperatur[], int &antal);  // H�r m�ste vi anv�nda referensparameter f�r antal. antal kommer att �ndras
void avlas(float temperatur[], int antal); // H�r skall inte antal �ndras, referensparameter beh�ver inte nv�ndas
int main() {
	
	// S� lite som m�jligt i main
	setlocale(LC_ALL,"swedish");
	float temperatur[1000];
	int antal = 0;
	meny(temperatur,antal);

	
	return 0;
}

void meny(float temperatur[], int antal)
{
		char val;
	cout << "Mata in en ny temperatur (n)" << endl;
	cout << "Avl�s alla inmatade temperaturer (t)" << endl;
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
			cout << "Hej p� dig!\n";
			break;
		defalt:
			cout << "Inkorrekt val";
			meny(temperatur,antal);
	}
}
	
void matain(float temperatur[], int &antal)
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

