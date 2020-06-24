#include <stdio.h>
void main()
{
    short i;
    for (i=32;i<=127;i++) {
        printf("\n%3d - %c",i,i);
        if (i%10 == 0) printf("\n");
    }
    printf("\n");
}
