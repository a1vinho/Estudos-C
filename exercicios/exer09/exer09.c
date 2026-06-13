#include <stdio.h>

int random_num( unsigned int player)
{
    unsigned int computer = 10;

    if (player == computer)
    {
        return 1;
    };
    return 0;
};

int main(void)
{
    int player;
    while (1) {
        printf("Tente advinha um numero - ");
    
        int read_data = scanf("%d",&player);
        if (read_data == 0) {
            printf("Numero invalído,encerrando a execução do programa \n");
            break;
        };
        int random = random_num(player);
        // printf("%d",read_data);
    
        if (random == 0) {
            printf("Você Errou,tente novamente \n");
        }
        else {
            printf("Você ACERTOU!!!\n");
        }
    };

    return 0;
}