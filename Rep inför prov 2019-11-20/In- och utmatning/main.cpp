// In- och utmatning
#include <iostream>
using namespace std;
int main() {
// utmatning till skärmen
// cout (skärmen) << (utmatningsoperatorn) "Det som ska matas ut"
// av textsträng eller variabel
// inmatning från tangentbordet
// cin (tangentbordet) >> (inmatningsoperatorn) variabel
// Problem med cin: Avslutar inmatningen när det kommer ett mellanslag
// EX:
string namn;
cin >> namn; // Användaren matar in Kalle Anka
cin.ignore(1000,'\n');
getline(cin,namn);
// Mer problem
// Vad händer när du matar in med getline efter att
// du matat in med cin?
// När du matat in med cin finns '\n' kvar
// vilket gör att getline avbryts direkt
cout << namn << " NAMNET\n var det" << endl;
//cout << " var det " << endl;







	return 0;
}
