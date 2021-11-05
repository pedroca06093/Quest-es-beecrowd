#include <stdio.h>

int main(void){
    int t, r1, r2, r;

    scanf("%d", &t);

    while(t > 0){
        scanf("%d %d", &r1, &r2);
        r = r1 + r2;
        printf("%d\n", r);

        t = t - 1;
    }

    return 0;
}