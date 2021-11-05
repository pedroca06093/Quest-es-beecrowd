#include <stdio.h>

int main(){

    int resto, cont;

    for ( cont = 1; cont <= 100; cont = cont + 1){

        resto=cont % 2;

        if (resto == 0){
            printf("%d\n", cont);
        }
        
    }
    
    return 0;
    
}