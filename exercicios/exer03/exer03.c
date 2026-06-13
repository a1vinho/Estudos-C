#include <stdio.h>

void write_hight (float hight) {
    printf("Digite sua altura por favor - ");

    scanf("%f",&hight);

    printf("Sua altura é de %.2f\n",hight);
}

int main (void) {
    float hight;

    write_hight(hight);

    return 0;
}