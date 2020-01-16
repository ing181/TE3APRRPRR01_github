#include <iostream>
using namespace std;
bool test(int a, int b);
int main() {

		if ( test(4,6) )
		cout << "SANT" << endl;


	return 0;
}

bool test(int a, int b)
{
	if ( a > b )
		return true;
	else 
	   return false;
}


