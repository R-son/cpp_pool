#include "menger.h"

void print(int i, int j)
{
    if (i / 10 >= 10)
        printf("%d", i);
    else if (i / 10 >= 1)
        printf("0%d", i);
    else
        printf("00%d", i);
    (j == 1) ? printf(" ") : printf("\n");
}

void next(int s, int l, int x, int y)
{
    menger(s, l, x, y);
    menger(s, l, x, y+s);
    menger(s, l, x, y+(2*s));
    menger(s, l, x+s, y);
    menger(s, l, x+(2*s), y);
    menger(s, l, x+(2*s), y+s);
    menger(s, l, x+(2*s), y+(2*s));
}

void menger(int size, int level, int x, int y)
{
    int s = (size/3);
    
    print(s, 1);
    print(x+s, 1);
    print(y+s, 0);
    if (level <= 1 || s <= 0)
        return;
    next(s, --level, x, y);
}