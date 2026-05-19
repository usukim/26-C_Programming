#include <stdio.h>

int update(int i, int j)
{
    j = j + i;
    printf("The sum(0:%d) = %d\n", i, j);
    return j;
}

int main(void)
{
    int i, j;

    for (i = 0, j = 0; i <= 10; i++)
    {
        j = update(i, j);
    }
    return 0;
}