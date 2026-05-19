#include <stdio.h>

void getValues(int *i, int *j)
{
    scanf("%d %d", i, j);
}

int sum(int a, int b)
{
    return a + b;
}

void printValues(int i, int j)
{
    printf("The sum(0:%d) = %d\n", i, j);
}

int main(void)
{
    int i, j;
    getValues(&i, &j);

    for (; i <= 10; i++)
    {
        j = sum(i, j);
        printValues(i, j);
    }
    return 0;
}