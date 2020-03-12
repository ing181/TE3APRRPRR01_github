#include <iostream>
using namespace std;
float storst(float f[]);
int main() {
  setlocale(LC_ALL, "Swedish");
  
  float f[4];
  for (int i=0; i<4; i++)
  {
  	cout << "Mata in tal " << (i+1) << endl;
  	cin >> f[i];
  }
  
  cout << "Största talet är " << storst(f) << endl;
  return 0;
}


float storst(float f[])
{
	float tmp = f[0];
	for (int i=1; i<4; i++)
	{
		if (f[i] > tmp)
			tmp = f[i];
	}
	
	return tmp;

}

