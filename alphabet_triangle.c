#include <stdio.h>
void main()
{
    int i, j;
    for(i=1; i<=4; i++)
    {
        for(j=65; j<65+i; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}