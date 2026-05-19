#include <stdio.h>

void getValues(int *x, int *y)
{
    scanf("%d %d", x, y);
}

int main(void)
{
    int a, b;
    getValues(&a, &b);
    printf("%d\n", a + b);
    return 0;
}