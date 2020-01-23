// Referensparametrar
// Parameter = invärde
#include <iostream>
using namespace std;
// OBS! &-tecknet
// Pröva att ta bort &-tecknet
void test(int &i, char &c);
int main() {

    int x = 9;
    char tecken = 'A';
    cout << x << ' ' << tecken << endl;
    test(x,tecken);
    cout << x << ' ' << tecken << endl;
	return 0;
}
/* Vad &-tecknet innebär
   Med & före variabelnamnet kopieras inte värdet till
   nya, lokala variabler i funktionen.
   DET ÄR SAMMA VARIABEL.
   Vilket framgår när du kör programmet.
   Fördel o. nackdel jämfört med värdeparametrar (där värdet kopieras)
   Fördel: Går åt mindre minne. Samma variabel används.
   Nackdel: Kan ställa till fel. Isoleringen inne i funktionen upphör
*/
void test(int &i, char &c)
{
	i=i+1;
	c=c+1;
}
