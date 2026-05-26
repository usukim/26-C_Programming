#include <stdio.h>
#include <ctype.h>

int up_down_case(int c)
{
    if (islower(c))
        c = toupper(c);
    else if (isupper(c))
        c = tolower(c);
    return c;
}

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        printf("%c", up_down_case(c));
    }
    return 0;
}