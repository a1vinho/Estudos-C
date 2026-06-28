#include <stdio.h>

int main (void) {

    int num;
    printf("Digite um numero - ");
    scanf("%hd",&num);
    int *fatorial = &num;
    for (int index = num -1;index != 0;index--) {

        *fatorial = *fatorial * index;
        printf("Number: %d,index: %d,Fatorial: %d\n",num,index,*fatorial);
    }

    return 0;
};