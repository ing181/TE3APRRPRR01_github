/* C program, inte C++. G�r ocks� att allokera minne dynamiskt */
/* Old school */
#include <stdio.h>
#include <stdlib.h>

      typedef struct {
          int x, y;
        } Point;

int main() {
	
	
	      Point *p;  /* En variabel p som kan inneh�lla adressen till en Point */

          /* Allokera minnesutrymme f�r en Point */
          /* H�r skapas en Point och genom p som inneh�ller
          adressen till den kommer vi �t den */
          p = (Point *) malloc(sizeof(Point));
          
          p->x=34; /* Tilldelar v�rde */
          p->y=65;
          int x = (p->x + p->y);
          
          /* "%d\n" betyder: d �r en unsigned int "Skriv ut en unsigned int och en radbrytning"
          x inneh�ller data */
          printf("%d\n", x);  /* Utskrift till sk�rmen */
          
          
          
          /* N�r p inte l�ngre beh�vs �terl�mnas minnet
             till systemet s� att det kan �teranv�ndas */
          free(p);
	
	return 0;
}
