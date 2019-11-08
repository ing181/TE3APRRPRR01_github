/*
Uppgift 14
13. Använd en switch-sats för att låta användaren välja:
1 för cykel
2 för bil
3 för spårvagn
och samma sak med if och else-if
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	cout << "Välj färdmedel, välj" << endl;
	cout << "1 för cykel" << endl;
	cout << "2 för bil" << endl;
	cout << "3 för spårvagn" << endl;
	int val;
	cin >> val;
	
	switch (val) // Måste vara ett heltal som undersöks (int eller char)
	{
		case 1:
		cout << "Du valde cykel" << endl;
		break; // gör så att programmet slutar kolla. Hoppar ur. Går till rad 35
		case 2:
		cout << "Du valde bil" << endl;
		break; // gör så att programmet slutar kolla. Hoppar ur. Går till rad 35	
		case 3:
		cout << "Du valde spårvagn" << endl;
		break; // gör så att programmet slutar kolla. Hoppar ur. Går till rad 35	
		default: // Frivilligt, om något annat heltal än 1, 2 eller 3 väljs
		cout << "Du valde ingenting" << endl;
	}
	
    cout << "Välj färdmedel, välj" << endl;
	cout << "1 för cykel" << endl;
	cout << "2 för bil" << endl;
	cout << "3 för spårvagn" << endl;
	cin >> val;
	
	if (val==1)
	 	cout << "Du valde cykel" << endl;
	else if (val==2)
	    cout << "Du valde bil" << endl;
	else if (val==3)
	    cout << "Du valde spårvagn" << endl;
	else
	    cout << "Du valde ingenting" << endl;
	
	return 0;
}
