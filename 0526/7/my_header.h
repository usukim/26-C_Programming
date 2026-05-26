#include <ctype.h>

int up_down_case(int c)
{
    if (islower(c))
        c = toupper(c);
    else if (isupper(c))
        c = tolower(c);
    return c;
}