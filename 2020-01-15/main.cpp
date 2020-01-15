#include <iostream>
using namespace std;
void test(float f[], int &antal);
int main() {
	setlocale(LC_ALL,"swedish");
	float falt[] = {5.3, -4.9, 8.6}; 
	int antal = 3;
	cout << "Före funktionen" << endl;
    cout << "antal = " << antal << endl;
	for (int i=0; i<3; i++)
		cout << falt[i] << ' ';
	cout << '\n';
	// Namnet på arrayen används
	test(falt,antal);
	
	cout << "Efter funktionen" << endl;
	cout << "antal = " << antal << endl;
	for (int i=0; i<3; i++)
		cout << falt[i] << ' ';
	cout << '\n';


	return 0;
}
void test(float f[], int &antal)
{
	for (int i=0; i<antal; i++)
			f[i] = f[i] * 100;
	antal = -1000;
}

