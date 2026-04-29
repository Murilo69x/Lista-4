#include <stdio.h>
int main() {
    int i, numero, maiorQ50 = 0;
    for (i = 1; i <= 5; i++) {
        scanf("%d", &numero);
        if(numero > 50){ 
            maiorQ50++;
        }
    }
    printf("total de numeros maiores que 50: %d\n", maiorQ50);
}
    return 0;
