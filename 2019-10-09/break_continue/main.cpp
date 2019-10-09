#include <iostream>
using namespace std;
int main() {
	
	// break
	/*
	int i = 0;
	while (1==1)
	{
		cout << i++ << endl;
		if (i == 5)
		{
			break;
		}
	}
	*/
	for (int i=0; i<10; i++)
	{
				
		if (i == 5) // Alla uttryck sam kan utvärderas till sant eller falskt funkar
		{
			continue;
		}
		cout << i << endl;
		
	}
	
	

	return 0;
}
