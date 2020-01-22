#include <iostream>
using namespace std;
bool test(bool b); // UTAN referensparameter. KOPIERAS a och b är OLIKA variabler
				  // MED referensparameter.  a och b är SAMMA variabel
int main() {

     bool a = true;
	for (int i=0; i<5; i++)
    {
    	
    	if ( test(a) )  
    		cout << "SANT" << endl; // Om a är true
    	else
    	    cout << "FALSKT" << endl; // Om a är false
    }


	return 0;
}

bool test(bool b)
{
	
	if (b == true)
	{
		b = false;  // Tilldela OBS! =
	}
	else
	{
		b = true; // Tilldela OBS! =
	}
	
	return b;
	
}


