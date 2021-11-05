#include <stdio.h>

int main(){
    int quant, num;

    scanf("%d", &quant);

    while(quant > 0){

        scanf("%d", &num);

        if (num == 0){
            puts("NULL");

        }else{
            if (num % 2 == 0){
                printf("EVEN ");
            }else{
                printf("ODD ");
            }

            if (num > 0){
                printf("POSITIVE\n");
            }else{
                printf("NEGATIVE\n");
            }
        }

        quant = quant - 1;
    }

    return 0;
}