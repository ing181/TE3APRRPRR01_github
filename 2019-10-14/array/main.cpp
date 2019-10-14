#include <iostream>
using namespace std;
int main() {
	// En variabel med flera värden
	// du kommer åt värdena genom
	// att varje värde har ett eget index
	int a[10]; // Plats för 10 "intar"
	for (int i=0; i<10; i++)
	{
	    a[i] = i+3;	
	}
	
	for (int i=0; i<10; i++)
	{
	    cout << a[i] << endl;	
	}
	
	
	
	

	return 0;
}
