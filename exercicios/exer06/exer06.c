#include <stdio.h>

void options(void)
{
    printf("---- Calculadore em C ----\n");
    printf("1 - Soma numeros\n");
    printf("2 - Subtrair numeros\n");
    printf("3 - Dividir numeros\n");
    printf("4 - Multiplicar numeros\n");
    printf("5 - Sair do programa\n");
};

int numbers_operation(unsigned char option)
{
    short int a;
    short int b;
    printf("Digite o primeiro numero - ");
    scanf("%hd",&a);
    printf("Digite o segundo numero - ");
    scanf("%hd",&b);
    switch (option)
    {
    case '1':
        {
            return a + b;
        }
        case '2':
        {
            return a - b;
        };
        case '3':
        {
            return a / b;
        }
        case '4': {return a * b;}
        case '5': {return 0;};
    }
};

unsigned char user_option(unsigned char option)
{
    int result = numbers_operation(option);
    return result; 
};

int main(void)
{
    options();
    unsigned char option;
    printf("Digite sua opção por favor - ");
    scanf("%c", &option);

    int data = user_option(option);


    printf("Resultado: %d\n",data);
    return 0;
};