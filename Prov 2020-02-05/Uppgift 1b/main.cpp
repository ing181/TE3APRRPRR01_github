#include <iostream>
using namespace std;
void storst(float f[], float &tmp);
int main() {
  setlocale(LC_ALL, "Swedish");
  
  float f[4];
  for (int i=0; i<4; i++)
  {
  	cout << "Mata in tal " << (i+1) << endl;
  	cin >> f[i];
  	
  }
  
  float tmp;
  storst(f,tmp);
  cout << "Största talet är " << tmp << endl;
  
  return 0;
}


void storst(float f[], float &tmp)
{
	tmp = f[0];
	for (int i=1; i<4; i++)
	{
		if (f[i] > tmp)
			tmp = f[i];
	}
}

