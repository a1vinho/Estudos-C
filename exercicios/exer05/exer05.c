#include <stdio.h>


void options(void) {
    printf("--- Calculadora terminal --- \n \n 1 - Soma numeros \n 2 - Dividir numeros \n 3 - Multiplicar numeros\n 4 - Subtrair numeros \n 5 - Sair do programa \n");
};

int soma_bitwise(int a,int b) {
    int soma = 0;
    int carry = 0;
    while (b != 0) {
        soma = a ^ b;
        carry = (a & b) << 1;

        printf("A: %d\n B: %d\n Soma:%d\n",a,b,soma);
        a = soma;
        b = carry;

        printf("A: %d\n B: %d\n Soma:%d\n",a,b,soma);

        printf("Carry:%d\n",carry);
    };
    return soma;
};

void function_Option(const char option) {
    switch (option) {
        case '1': {
            int result = soma_bitwise(3,3);

            printf("Resultado: %d\n\n",result);
        };
    };
};

int main (void) {
    unsigned char option = 0;
    // function_Option('1');

    int a = 3;
    int b = 3;
    int soma = a ^ b;

    int soma2 = (a & b) << 1;
    printf("soma:%d\n,soma2:%d\n",soma,soma2);
    return 0;
}

// 0000000000000011 = 3
// 0000000000000011 = 1

// // 0000000000000010