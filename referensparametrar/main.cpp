// Referensparametrar
// Parameter = inv�rde
#include <iostream>
using namespace std;
// OBS! &-tecknet
void test(int &i, char &c);
int main() {

    int x = 9;
    char tecken = 'A';
    cout << x << ' ' << tecken << endl;
    test(x,tecken);
    cout << x << ' ' << tecken << endl;
	return 0;
}
/* Vad &-tecknet inneb�r
   Med & f�re variabelnamnet kopieras inte v�rdet till
   nya, lokala variabler i funktionen.
   DET �R SAMMA VARIABEL.
   Vilket framg�r n�r du k�r programmet.
   F�rdel o. nackdel j�mf�rt med v�rdeparametrar (d�r v�rdet kopieras)
   F�rdel: G�r �t mindre minne. Samma variabel anv�nds.
   Nackdel: Kan st�lla till fel. Isoleringen inne i funktionen upph�r
*/
void test(int &i, char &c)
{
	i=i+1;
	c=c+1;
}
