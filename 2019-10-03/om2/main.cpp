#include <iostream>
using namespace std;
int main() {
	
	int a = 1;
	int b = 0;
	
	
	if (a == 1)
	{
		if (b == 0) // Nästlad if-sats, if-sats i if-sats
		{
			cout << "a har värdet 1 och b har värdet 0" << endl;
		}	
	}
	
	if ( (a == 1) && (b == 0) )
	{
		cout << "a har värdet 1 och b har värdet 0" << endl;
	}
	
	
	

	return 0;
}
