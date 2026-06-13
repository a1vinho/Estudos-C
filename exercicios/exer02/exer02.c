#include <stdio.h>

int main () {
    int age;

    printf("Digite sua idade - ");

    scanf("%d",&age);
    
    printf("Sua idade daqui a 10 anos é %d\n ",age + 10);

    return 0;
};