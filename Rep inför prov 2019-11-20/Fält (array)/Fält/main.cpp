// Fält 
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
// En vanlig variabel (unär variabel)
// Kan endast innehålla ett enda värde
// Hitta största talet i en array (ett fält)
int falt[5] = {3,4,66,4,-6};
int temp;
temp=falt[0];
if (falt[1] > temp)
	temp=falt[1];
if (falt[2] > temp)
	temp=falt[2];
if (falt[3] > temp)
	temp=falt[3];
if (falt[4] > temp)
	temp=falt[4];
cout << temp << " är största talet" << endl;

// Bättre
temp = falt[0];
for (int i=1; i<5; i++)
{
     if (falt[i] > temp)
         temp=falt[i];
}
cout << temp << " är största talet" << endl;
	return 0;
}
