#include <stdio.h>

int main(void)
{
    const int moedas[] = {100, 50, 25, 10, 5, 1};
    
    int value;
    int quantidade;
    printf("Digite o valor - ");
    
    scanf("%d", &value);

    for (int moeda = 0;moeda < 6;moeda++) {
        quantidade = value / moedas[moeda];
        value = value % moedas[moeda];
        if (quantidade > 0) {
            printf("Moeda: %d Resto:%d Quantidade:%d\n",moedas[moeda],value,quantidade);
        };
    };
    return 0;
};