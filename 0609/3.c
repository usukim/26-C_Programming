#include <stdio.h>

int main(void)
{
    int size, key, i;

    printf("Input size of the list : ");
    scanf("%d", &size);

    int list[size];

    printf("Input %d values of the list : ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &list[i]);

    for (i = 0; i < size; i++)
        printf("%d ", list[i]);

    printf("\nInput a key value: ");
    scanf("%d", &key);

    for (i = 0; i < size; i++)
        if (list[i] == key)
            printf("Find the key at %d of the list array\n", i + 1);
    printf("End\n");
    return 0;
}