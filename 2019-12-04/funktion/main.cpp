#include <iostream>
using namespace std;
char val();
int absolutbeloppet(char);
void rakna_ut_absolutbeloppet(int);
int main() {
	setlocale(LC_ALL,"swedish");
	
	val();

	return 0;
}

char val()
{
	char v;
	cout << "Vad vill du g�ra?" << endl;
	cout << "Ber�kna absolutbeloppet av ett tal (a)" << endl;
	cout << "N�got annat (n)" << endl;
	cin >> v;
	
	absolutbeloppet(v);
	
}
int absolutbeloppet(char in)
{
	if (in=='a')
	{
		int tal;
		cout << "Mata in ett tal ";
		cin >> tal;
		rakna_ut_absolutbeloppet(tal);
	}
	else 
	    cout << "�nnu ej implamenterat i programmet" << endl;
}
void rakna_ut_absolutbeloppet(int talet)
{
	if (talet < 0)
		talet = talet * (-1);
		
	cout << "Absolutbeloppet �r " << talet << endl;
	
}
