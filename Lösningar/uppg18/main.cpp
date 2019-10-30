/*
18. Gör ett program som adderar, subtraherar, multiplicerar eller dividerar
två inmatade tal. Användaren ska kunna välja +, -, * eller /.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    float a,b;
    char raknesatt;
    
    cout << "Välj räknesätt" << endl;
    cout << "+ för addition" << endl;
    cout << "- för subtraktion" << endl;
    cout << "* för multiplikation" << endl;
    cout << "/ för division" << endl;
    
    cin >> raknesatt;
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
	
	return 0;
}
