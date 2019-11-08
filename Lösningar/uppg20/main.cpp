/*
Uppgift 20
Utveckla programmet i uppgift 18 med en meny med 5 val.
De fyra räknesätten och en möjlighet att avsluta.
Så länge användaren inte väljer att avsluta fortsätter programmet
och användaren kan mata in nya tal och välja räknesätt.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    float a,b;
    char raknesatt;
    
    while (true)  // Evig loop
    {
	    cout << "Välj räknesätt" << endl;
	    cout << "+ för addition" << endl;
	    cout << "- för subtraktion" << endl;
	    cout << "* för multiplikation" << endl;
	    cout << "/ för division" << endl;
	    cout << "a för att avsluta" << endl;
	    
	    cin >> raknesatt;
	    if ( (raknesatt == 'a') || (raknesatt == 'A') )
	    {
	    	break; // Hoppar ur, går till rad 50
	    }
	    cout << "Mata in första talet ";
	    cin >> a;
	    cout << "Mata in andra talet ";
	    cin >> b;
	    
	    switch (raknesatt)
	    {
	    	case '+':
	    		cout << a << '+' << b << '=' << (a+b) << endl;
	    	    break;
	       case '-':
	    		cout << a << '-' << b << '=' << (a-b) << endl;
	    	    break;
	       case '*':
	    		cout << a << '*' << b << '=' << (a*b) << endl;
	    	    break;    	
	       case '/':
	    		cout << a << '/' << b << '=' << (a/b) << endl;
	    	    break;    	
	    }
    }
	return 0;
}
