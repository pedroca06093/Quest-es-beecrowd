#include <stdio.h>

int main(void){
    int n, t, j=1;
    int i, total=0;

    scanf("%d", &t);

    while(j<=t){

      scanf("%d", &n);

        for(i = 1; i < n; i = i + 1){
          if ( n % i == 0 ){

          total += i;
          }

        }  
          if (total == n){
              printf("%d eh perfeito\n", n);
          }else{
              printf("%d nao eh perfeito\n", n);
          }
          
        j++;
        total=0;
        
         
        
    }

	return 0;
}