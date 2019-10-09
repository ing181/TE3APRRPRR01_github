#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int val;
	cout << "Vilken månad väljer du? ";
    cin >> val; // Heltal mellan 1-12
    /* Du kan i stället använda if och else if
    if (val == 1)
    {
    	cout << "Du valde Januari" << endl;
    }
    else if (val == 2)
    {
    	cout << "Du valde Februari" << endl;
    }
    else if (val == 3)
    {
    	cout << "Du valde Mars" << endl;
    }
    else
    {
    	cout << "Du valde en månad som inte finns!" << endl;
    }
    // Och så vidare
    */
    switch (val)
    {
    	case 1: 
    	cout << "Du valde Januari" << endl;
    	break;
    	case 2:
    	cout << "Du valde Februari" << endl;
		break;
    	case 3:
    	cout << "Du valde Mars" << endl;
		break;
    	case 4:
    	cout << "Du valde April" << endl;
		break;
    	case 5:
    	cout << "Du valde Maj" << endl;
		break;
    	case 6:
    	cout << "Du valde Juni" << endl;
		break;
    	case 7:
    	cout << "Du valde Juli" << endl;
		break;
    	case 8:
    	cout << "Du valde Augusti" << endl;
		break;
    	case 9:
    	cout << "Du valde September" << endl;
		break;
    	case 10:
    	cout << "Du valde Oktober" << endl;
		break;
    	case 11:
    	cout << "Du valde November" << endl;
		break;
    	case 12:
    	cout << "Du valde December" << endl;
		break;
		default:
		cout << "Du valde en månad som inte finns!" << endl;
		   	
    }
    
    
	return 0;
}
