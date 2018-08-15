#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 8;
    int y = 9;

    printf("x is %i\n", x);
    printf("y is %i\n",y);

    // swapping
    int temp = x;
    x = y;
    y= temp;

    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
