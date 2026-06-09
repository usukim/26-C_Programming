#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int lotto[6];
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        lotto[i] = rand() % 45 + 1;
        printf("%d ", lotto[i]);
    }
    printf("\n");
    return 0;
}