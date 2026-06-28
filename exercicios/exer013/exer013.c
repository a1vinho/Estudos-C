#include <stdio.h>

void calcularFatorial(int *numero) {
    if (*numero < 2) return;
    for (int index = *numero -1;index != 1;index--) {

        *numero = *numero * index;
    };
}


int main (void) {
    int fatorial;

    printf("Digite um valor - ");
    scanf("%d",&fatorial);
    
    calcularFatorial(&fatorial);

    printf("Fatorial é de %d\n",fatorial);
    return 0;
};