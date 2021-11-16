#include <stdio.h>

int main()
{
    printf("some doubt\n");
    printf("|%d|",987);
    printf("|%2d|",987);
    printf("|%8d|",987);
    printf("|%-8d|",987);
    printf("|%-0.2f|",9876.54);
    printf("|%-4.2f|",9876.54);
    printf("|%-8.2f|",9876.54);
    printf("|%10.3f|",9876.54);

    return 0;
}
