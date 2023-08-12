#include <stdio.h>
#include <stdlib.h>

int main()
{float r1,r2,r3,resistance_ser,resistance_par;

   printf("Enter r1?:");
   scanf("%f",&r1);
   printf("Enter r2?:");
   scanf("%f",&r2);
   printf("Enter r3?:");
   scanf("%f",&r3);
   resistance_ser=r1+r2+r3;
   resistance_par=(1/r1)+(1/r2)+(1/r3);
   printf("Resistance series:%.2f\n",resistance_ser);
   printf("rESISTANCE PARALLEL:%.2f\n",resistance_par);
    return 0;
}
