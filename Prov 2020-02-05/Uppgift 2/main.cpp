#include <iostream>
#include <string>
using namespace std;
bool beharig(string,int,char);
int main() {
  setlocale(LC_ALL, "Swedish");
  
  string ort;
  int alder;
  char initial;
  cout << "Var bor du? ";
  cin >> ort;
  cout << "Hur gammal är du? ";
  cin >> alder;
  cout << "Vilken bokstav börjar ditt efternamn på? ";
  cin >> initial; 
  
  if (beharig(ort, alder, initial))
  		cout << "Du är behörig" << endl;
  else
        cout << "Du är tyvärr inte behörig" << endl;
  
  return 0;
}
bool beharig(string ort, int alder, char initial)
{
	if ( (alder < 12) || (alder > 18) )
		return false;
	if  (ort == "Lerum")  
		return true;
	if ( (alder < 16) && (initial != 'P') )
		return true;	
	
	return false;
}

