/*
Uppgift 20
Utveckla programmet i uppgift 18 med en meny med 5 val.
De fyra r�knes�tten och en m�jlighet att avsluta.
S� l�nge anv�ndaren inte v�ljer att avsluta forts�tter programmet
och anv�ndaren kan mata in nya tal och v�lja r�knes�tt.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    float a,b;
    char raknesatt;
    
    while (true)  // Evig loop
    {
	    cout << "V�lj r�knes�tt" << endl;
	    cout << "+ f�r addition" << endl;
	    cout << "- f�r subtraktion" << endl;
	    cout << "* f�r multiplikation" << endl;
	    cout << "/ f�r division" << endl;
	    cout << "a f�r att avsluta" << endl;
	    
	    cin >> raknesatt;
	    if ( (raknesatt == 'a') || (raknesatt == 'A') )
	    {
	    	break; // Hoppar ur, g�r till rad 50
	    }
	    cout << "Mata in f�rsta talet ";
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
