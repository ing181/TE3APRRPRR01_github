/*
18. G�r ett program som adderar, subtraherar, multiplicerar eller dividerar
tv� inmatade tal. Anv�ndaren ska kunna v�lja +, -, * eller /.
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
    float a,b;
    char raknesatt;
    
    cout << "V�lj r�knes�tt" << endl;
    cout << "+ f�r addition" << endl;
    cout << "- f�r subtraktion" << endl;
    cout << "* f�r multiplikation" << endl;
    cout << "/ f�r division" << endl;
    
    cin >> raknesatt;
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
	
	return 0;
}
