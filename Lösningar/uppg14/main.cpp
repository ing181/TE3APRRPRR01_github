/*
Uppgift 14
13. Anv�nd en switch-sats f�r att l�ta anv�ndaren v�lja:
1 f�r cykel
2 f�r bil
3 f�r sp�rvagn
och samma sak med if och else-if
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	cout << "V�lj f�rdmedel, v�lj" << endl;
	cout << "1 f�r cykel" << endl;
	cout << "2 f�r bil" << endl;
	cout << "3 f�r sp�rvagn" << endl;
	int val;
	cin >> val;
	
	switch (val) // M�ste vara ett heltal som unders�ks (int eller char)
	{
		case 1:
		cout << "Du valde cykel" << endl;
		break; // g�r s� att programmet slutar kolla. Hoppar ur. G�r till rad 35
		case 2:
		cout << "Du valde bil" << endl;
		break; // g�r s� att programmet slutar kolla. Hoppar ur. G�r till rad 35	
		case 3:
		cout << "Du valde sp�rvagn" << endl;
		break; // g�r s� att programmet slutar kolla. Hoppar ur. G�r till rad 35	
		default: // Frivilligt, om n�got annat heltal �n 1, 2 eller 3 v�ljs
		cout << "Du valde ingenting" << endl;
	}
	
    cout << "V�lj f�rdmedel, v�lj" << endl;
	cout << "1 f�r cykel" << endl;
	cout << "2 f�r bil" << endl;
	cout << "3 f�r sp�rvagn" << endl;
	cin >> val;
	
	if (val==1)
	 	cout << "Du valde cykel" << endl;
	else if (val==2)
	    cout << "Du valde bil" << endl;
	else if (val==3)
	    cout << "Du valde sp�rvagn" << endl;
	else
	    cout << "Du valde ingenting" << endl;
	
	return 0;
}
