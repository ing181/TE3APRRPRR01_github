#include <iostream>
using namespace std;
void meny(float temperatur[], int antal);
void matain(float temperatur[], int &antal); 
void avlas(float temperatur[], int antal);
int main() {
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
			cout << "Hej på dig\n";
			break;			
	    default:
	    	cout << "Felaktigt val\n";
	    	meny(temperatur, antal);
	}
	
}
void matain(float temperatur[], int &antal)  // antal ändras, använd referensparameter
{
	cout << "Mata in den nya temperaturen ";
	cin >> temperatur[antal];
	antal++;
	meny(temperatur,antal);
	
}
void avlas(float temperatur[], int antal) // Ingen referensparameter för "antal"
{
	for (int i=0; i<antal; i++)
		cout << temperatur[i] << " grader\n";
		
	meny(temperatur,antal);
}




