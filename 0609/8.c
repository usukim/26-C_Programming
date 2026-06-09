#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int visited[46];
    int set, num, i, j;

    printf("Enter lotto set number : ");
    scanf("%d", &set);

    int lotto[set][6];

    srand(time(NULL));
    for (i = 0; i < set; i++)
    {
        // visited 0으로 초기화
        for (j = 0; j < 46; j++)
            visited[j] = 0;

        printf("set %d :", i + 1);
        for (j = 0; j < 6; j++)
        {
            // 아직 뽑지 않은 수 나올떄까지 반복
            do
            {
                num = rand() % 45 + 1;
            } while (visited[num] != 0);

            // 뽑았다면 visited[num]에 1 할당하여 중복 방지
            visited[num] = 1;
            lotto[i][j] = num;
            printf("%d ", lotto[i][j]);
        }
        printf("\n");
    }
    return 0;
}