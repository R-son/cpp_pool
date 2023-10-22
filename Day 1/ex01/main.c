#include "menger.h"

int main(int ac, char **av)
{
    int size;
    int level;

    if (ac != 3)
        return 84;
    size = atoi(av[1]);
    level = atoi(av[2]);
    if (size % 3 != 0 || size < 3
    || level < 0 || level > 2)
        return 84;
    menger(size, level, 0, 0);
    return 0;
}