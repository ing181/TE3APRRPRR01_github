#include <iostream>
using namespace std;
void skrivut(int x, int y, char tecken);
int main() {
  setlocale(LC_ALL, "Swedish");
  int x, y;
  char tecken;
  
  cout << "V�lj antalet kolumner ";
  cin >> x;
  cout << "V�lj antalet rader ";
  cin >> y; 
  cout << "V�lj tecken ";
  cin >> tecken;
  
  skrivut(x, y, tecken);
  
  return 0;
}
void skrivut(int x, int y, char tecken)
{
	for (int i=0; i<y; i++)
	{

		for (int j=0; j<x; j++)
		{
			cout << tecken;
			
		}
	cout << endl;
	}
	
}

