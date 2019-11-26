// Funktion
#include <iostream>
// Funktion som omvandlar från Celsius till Fahrenheit
float celsiusToFaherenheit(float); // Funktionsdeklaratioon
								   // In- och utvärde samt namn
using namespace std;
int main() {
	float celsius, fahrenheit;
	cout << "Ange temperaturen i Celsius:> ";
	cin >> celsius;
	fahrenheit = celsiusToFaherenheit(celsius); // Funktionsanrop, funktionen används
	cout << "Motsvaras av " << fahrenheit << " farenheit" << endl;
	return 0;
}
float celsiusToFaherenheit(float c) // Funktionsdeklaration Vad funktionen gör
{
	float f = c*1.8 + 32;
	return f;
}

