#include <stdio.h>
 
int main() {

    int num, contador = 0;
    float media, soma = 0;

    do{
        scanf("%d", &num);
        if (num >= 0){
            soma += num;
            contador++;
        }

    }while (num >=0);
    
    media =  soma/contador;
    printf("%.2f\n", media);
    
    return 0;
}