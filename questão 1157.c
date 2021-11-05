#include <stdio.h>

int main() {
  
    int i, n,resto; 
    int cont = 0;
  
    scanf("%d", &n);

  
    for (i = 1; i <= n; i++) {

        resto = n % i;
        if (resto ==0){
            printf("%d\n",i);
        } 
    }           
    
    return 0;
}