// In- och utmatning
#include <iostream>
using namespace std;
int main() {
// utmatning till sk�rmen
// cout (sk�rmen) << (utmatningsoperatorn) "Det som ska matas ut"
// av textstr�ng eller variabel
// inmatning fr�n tangentbordet
// cin (tangentbordet) >> (inmatningsoperatorn) variabel
// Problem med cin: Avslutar inmatningen n�r det kommer ett mellanslag
// EX:
string namn;
cin >> namn; // Anv�ndaren matar in Kalle Anka
cin.ignore(1000,'\n');
getline(cin,namn);
// Mer problem
// Vad h�nder n�r du matar in med getline efter att
// du matat in med cin?
// N�r du matat in med cin finns '\n' kvar
// vilket g�r att getline avbryts direkt
cout << namn << " NAMNET\n var det" << endl;
//cout << " var det " << endl;







	return 0;
}
