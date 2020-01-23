/* C program, inte C++. Går också att allokera minne dynamiskt */
/* Old school */
#include <stdio.h>
#include <stdlib.h>

      typedef struct {
          int x, y;
        } Point;

int main() {
	
	
	      Point *p;  /* En variabel p som kan innehålla adressen till en Point */

          /* Allokera minnesutrymme för en Point */
          /* Här skapas en Point och genom p som innehåller
          adressen till den kommer vi åt den */
          p = (Point *) malloc(sizeof(Point));
          
          p->x=34; /* Tilldelar värde */
          p->y=65;
          int x = (p->x + p->y);
          
          /* "%d\n" betyder: d är en unsigned int "Skriv ut en unsigned int och en radbrytning"
          x innehåller data */
          printf("%d\n", x);  /* Utskrift till skärmen */
          
          
          
          /* När p inte längre behövs återlämnas minnet
             till systemet så att det kan återanvändas */
          free(p);
	
	return 0;
}
