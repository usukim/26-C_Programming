#include <stdio.h>
#include "my_header.h"

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        printf("%c", up_down_case(c));
    }
    return 0;
}