#include <iostream>
using namespace std;
void skrivut(int x, int y, char tecken1, char tecken2);
int main() {
  setlocale(LC_ALL, "Swedish");
  int x, y;
  char tecken1;
  char tecken2;
  
  cout << "V�lj antalet kolumner ";
  cin >> x;
  cout << "V�lj antalet rader ";
  cin >> y; 
  cout << "V�lj tecken 1 ";
  cin >> tecken1;
  cout << "V�lj tecken 2 ";
  cin >> tecken2;
  
  skrivut(x, y, tecken1, tecken2);
  
  return 0;
}
void skrivut(int x, int y, char tecken1, char tecken2)
{
	int m = 0;
	for (int i=0; i<y; i++)
	{

		for (int j=0; j<x; j++)
		{
			if ( (m%2) == 0 )
				cout << tecken1;
			else
				cout << tecken2;
				
			m++;
			
		}
	cout << endl;
	}
	
}

