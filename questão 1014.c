#include <stdio.h>
#include <stdlib.h>

int main(){
 float litros ;
 int km;
 double media;
 
  scanf("%d %f", &km, &litros );

  media = km / litros;

  printf("%.3f km/l\n", media);

    return 0;

}