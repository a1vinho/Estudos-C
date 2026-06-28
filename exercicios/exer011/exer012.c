#include <stdio.h>

int main(void)
{

    int nums[5] = {5, 3, 20, -1};

    int max = 0;
    int min = 0;

    for (int index = 0; index < 5; index++)
    {
        if (nums[index] > max)
        {
            max = nums[index];
        }
        if (nums[index] < min)
        {
            min = nums[index];
        };
    };

    printf("Valor maximo: %d\n", max);
    printf("Valor minimo: %d\n", min);

    return 0;
}