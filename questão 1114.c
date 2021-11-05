#include <stdio.h>

int main(void){
    int senha;

    do{
        scanf("%d", &senha);
        if (senha == 2002){
            puts("Acesso Permitido");
        }else{
            puts("Senha Invalida");
        }
    }while(senha != 2002);

    return 0;
}