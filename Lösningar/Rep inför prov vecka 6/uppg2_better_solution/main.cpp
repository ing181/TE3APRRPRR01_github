// Uppgift 2
#include <iostream>
#include <string>
using namespace std;
void meny(float temperatur[], int antal);
void matain(float temperatur[], int antal);  // Beh�ver inte alls skickas som referensparameter
											 // antal skickas hela tiden mellan de olika funktionerna.
void avlas(float temperatur[], int antal);
void max(float temperatur[], int antal);
void min(float temperatur[], int antal);
void medel(float temperatur[], int antal);
int main() {
	
	// S� lite som m�jligt i main
	setlocale(LC_ALL,"swedish");
	float temperatur[1000];
	// Vi kan skicka heltalet 0
	// programmet �terv�nder inte till main
	// f�r�n anv�ndaren valt 'a' i menyn
	meny(temperatur,0);
	// Skrivs n�sta rad ut har anv�ndaren valt 'a' i menyn
	cout << "Hej p� dig!\n";
	return 0;
}
void meny(float temperatur[], int antal)
{
	char val;
	cout << "Mata in en ny temperatur (n)" << endl;
	cout << "Avl�s alla inmatade temperaturer (t)" << endl;
	cout << "Visa h�gsta temperaturen (h)" << endl;
	cout << "Visa l�gsta temperaturen (l)" << endl;
	cout << "Visa medeltemperaturen (m)" << endl;
	cout << "Avsluta (a)" << endl;
	cin >> val;
	switch (val)
	{
		case 'n':
			matain(temperatur,antal);
			break;
		case 't':
			avlas(temperatur,antal);
			break;
		case 'h':
			max(temperatur,antal);
			break;
		case 'l':
			min(temperatur,antal);
			break;
		case 'm':
			medel(temperatur,antal);
			break;
		case 'a':
			return;
			break;
		defalt:
			cout << "Inkorrekt val";
			meny(temperatur,antal);
	}
}
void matain(float temperatur[], int antal)
{
	cout << "Mata in den nya temperaturen ";
	cin >> temperatur[antal];
	antal++;
	// H�r beh�vs inte antal skickas som referensparameter
	// antal har just �kat med 1 och det nya v�rdet 
	// skickas med till funktionen meny
	meny(temperatur,antal);
}
void avlas(float temperatur[], int antal)
{
	for (int i=0; i<antal; i++)
	    cout << temperatur[i] << " grader\n";
	
	meny(temperatur,antal);
}
void max(float temperatur[], int antal)
{
	float t = temperatur[0];
	for (int i=1; i<antal; i++)
	{
		if (temperatur[i] > t)
			t=temperatur[i];
	}
	cout << "H�gsta temperaturen �r " << t << endl;
	meny(temperatur,antal);
}
void min(float temperatur[], int antal)
{
	float t = temperatur[0];
	for (int i=1; i<antal; i++)
	{
		if (temperatur[i] < t)
			t=temperatur[i];
	}
	cout << "L�gsta temperaturen �r " << t << endl;
	meny(temperatur,antal);
}
void medel(float temperatur[], int antal)
{
	float t = 0;
	for (int i=0; i<antal; i++)
	{
		t = t + temperatur[i];
	}
	float medel = t / antal;
	cout << "Medeltemperaturen �r " << medel << endl;
	meny(temperatur,antal);
}
