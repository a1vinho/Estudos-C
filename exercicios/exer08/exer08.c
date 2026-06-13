#include <stdio.h>
#include <string.h>

int comparetr(char str1[], char str2[])
{
    int lengthSize = strlen(str1) + strlen(str2);

    // printf("length: %d\n",lengthSize);
    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }
    unsigned int count = 0;

    // printf("%s\n", str1);
    // printf("%s\n", str2);
    while (count < lengthSize)
    {
        char letra1 = str1[count];
        char letra2 = str2[count];

        if (letra1 == letra2 || letra2 == letra1)
        {
            count++;
        };
        if (letra1 != letra2 || letra2 != letra1)
        {
            return 0;
        };
    };
    return 1;
};

int main(void)
{
    int result = comparetr("python", "python ");

    printf("%d\n", result);
    return 0;
};