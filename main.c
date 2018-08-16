#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 65;
    int y = 56;

    printf("x is %i\n", x);
    printf("y is %i\n",y);

    // swapping
    int temp = x;
    x = y;
    y= temp;

    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
