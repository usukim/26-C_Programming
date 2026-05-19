#include <stdio.h>

void printValue(int n)
{
    printf("%d\n", n);
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printValue(a + b);
    return 0;
}