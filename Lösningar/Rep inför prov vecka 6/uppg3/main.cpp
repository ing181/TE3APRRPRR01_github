// Uppgift 3
#include <iostream>
#include <string>
using namespace std;

struct Temp {
	float temperatur;
	string datum;
};
void meny(Temp minTemp[], int antal);
void matain(Temp minTemp[], int &antal);  // Här måste vi använda referensparameter för antal. antal kommer att ändras
void avlas(Temp minTemp[], int antal);
void max(Temp minTemp[], int antal);
void min(Temp minTemp[], int antal);
void medel(Temp minTemp[], int antal);
bool anvantDatum(Temp minTemp[], int antal, string nyttDatum);
void visaTempVidDatum(Temp minTemp[], int antal);
int main() {
	
	Temp minTemp[1000]; // Maximalt 1000 temperaturer kan matas in
	
	// Så lite som möjligt i main
	setlocale(LC_ALL,"swedish");
	float temperatur[1000];
	int antal = 0;
	meny(minTemp,antal); // en array skickas alltid som referens. 
	
	return 0;
}
void meny(Temp minTemp[], int antal)
{
	char val;
	cout << "Mata in en ny temperatur (n)" << endl;
	cout << "Avläs alla inmatade temperaturer (t)" << endl;
	cout << "Visa högsta temperaturen (h)" << endl;
	cout << "Visa lägsta temperaturen (l)" << endl;
	cout << "Visa medeltemperaturen (m)" << endl;
	cout << "Visa temperaturen vid detta datum (v)" << endl;
	cout << "Avsluta (a)" << endl;
	cin >> val;
	switch (val)
	{
		case 'n':
			matain(minTemp,antal);
			break;
		case 't':
			avlas(minTemp,antal);
			break;
		case 'h':
			max(minTemp,antal);
			break;
		case 'l':
			min(minTemp,antal);
			break;
		case 'm':
			medel(minTemp,antal);
			break;
		case 'v':
			visaTempVidDatum(minTemp,antal);
			break;
		case 'a':
			cout << "Hej på dig!\n";
			return;
			break;
		defalt:
			cout << "Inkorrekt val";
			meny(minTemp,antal);
	}
}
void matain(Temp minTemp[], int &antal)
{
	cout << "Mata in den nya temperaturen ";
	string nyttDatum;
    float tmp;
    cin >> tmp;
	do 
	{   
		cout << "Mata in datum (yyyy-mm-dd) ";
		cin >> nyttDatum;
	} while ( !anvantDatum(minTemp,antal, nyttDatum) );
	minTemp[antal].temperatur = tmp;
	minTemp[antal].datum = nyttDatum;
	antal++;
	
	meny(minTemp,antal);
}
void avlas(Temp minTemp[], int antal)
{   cout << endl;
	for (int i=0; i<antal; i++)
	    cout << minTemp[i].temperatur << " grader från " << minTemp[i].datum << endl;
	
	meny(minTemp,antal);
}
void max(Temp minTemp[], int antal)
{
	float t = minTemp[0].temperatur;
	for (int i=1; i<antal; i++)
	{
		if (minTemp[i].temperatur > t)
			t=minTemp[i].temperatur;
	}
	cout << "Högsta temperaturen är " << t << endl;
	meny(minTemp,antal);
}
void min(Temp minTemp[], int antal)
{
	float t = minTemp[0].temperatur;
	for (int i=1; i<antal; i++)
	{
		if (minTemp[i].temperatur < t)
			t=minTemp[i].temperatur;
	}
	cout << "Lägsta temperaturen är " << t << endl;
	meny(minTemp,antal);
}
void medel(Temp minTemp[], int antal)
{
	float t = 0;
	for (int i=0; i<antal; i++)
	{
		t = t + minTemp[i].temperatur;
	}
	float medel = t / antal;
	cout << "Medeltemperaturen är " << medel << endl;
	meny(minTemp,antal);
}

bool anvantDatum(Temp minTemp[], int antal, string nyttDatum)
{
	for (int i=0; i<antal; i++)
	{
		if (minTemp[i].datum == nyttDatum)
				return false;
	}
	
	return true;
}
void visaTempVidDatum(Temp minTemp[], int antal)
{
	string vidDatum;
	cout << "Välj datum ";
	cin >> vidDatum;
	
	for (int i=0; i<antal; i++)
	{
		if (minTemp[i].datum == vidDatum)
		{
				cout << "Temperaturen vid datum " << vidDatum << " är " << minTemp[i].temperatur << endl;
				meny(minTemp,antal);
		}
	}
	
	cout << vidDatum << " kan inte hittas" << endl;
	meny(minTemp,antal);
	
}

