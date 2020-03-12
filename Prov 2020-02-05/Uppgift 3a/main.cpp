#include <iostream>
using namespace std;
void skrivut(int x, int y, char tecken);
int main() {
  setlocale(LC_ALL, "Swedish");
  int x, y;
  char tecken;
  
  cout << "Välj antalet kolumner ";
  cin >> x;
  cout << "Välj antalet rader ";
  cin >> y; 
  cout << "Välj tecken ";
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

