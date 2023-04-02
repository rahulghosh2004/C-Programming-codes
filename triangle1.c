// star pattern in triangle shape
#include <stdio.h>
void main()
{
    int n, i, j;
    printf("no of rows & columns : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}