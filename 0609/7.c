#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int set;

    printf("Enter lotto set number : ");
    scanf("%d", &set);

    int lotto[set][6];

    srand(time(NULL));
    for (int i = 0; i < set; i++)
    {
        printf("set %d :", i + 1);
        for (int j = 0; j < 6; j++)
        {
            lotto[i][j] = rand() % 45 + 1;
            printf("%d ", lotto[i][j]);
        }
        printf("\n");
    }
    return 0;
}