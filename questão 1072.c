#include <stdio.h>

int main(void){
    int n=0, cont, x=0, totalIn=0, totalOut=0;

    scanf("%d", &n);

    for(cont = 1; cont <= n; cont = cont + 1){
        scanf("%d",&x);

        if(x >= 10 && x <= 20){
            totalIn = totalIn + 1;
            
        }else{
            totalOut = totalOut + 1;
        }
            
    }
    printf("%d in\n", totalIn);
    printf("%d out\n", totalOut);


	return 0;
}