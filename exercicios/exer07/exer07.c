#include <stdio.h>

unsigned int length(const char string[])
{
    unsigned int cont;
    while (1)
    {
        char letra = string[cont];
        if (letra)
        {
            cont++;
        };
        if (!letra)
        {
            break;
        };
        printf("%c\n", letra);
    };

    return cont;
};

int main(void)
{

    char text[] = "javascript python";

    unsigned int size = length(text);

    printf("Length: %d\n", size);

    return 0;
};