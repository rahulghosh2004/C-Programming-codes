
// Write a C program to reverse a given number by the user.
/*#include <stdio.h>
int main()
{
    int n,rem,rev_number = 0;
    printf("enter a number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        rev_number = rev_number * 10 + rem;
        n = n / 10;
    }

    printf("reverse of the number is : %d", rev_number);

    return 0;
}*/

// Write C programm ssing array to perform the addition of two numbers which are given by the user.
/*#include <stdio.h>
int main()
{
    int num[2], sum = 0;
    printf("enter two numbers : ");

    for(int i=0;i<2;i++)
    {
        scanf("%d", &num[i]);
    }

    for(int i=0;i<2;i++)
    {
        sum = sum + num[i];
    }

    printf("addition = %d", sum);

    return 0;
}*/

// Write a C program to calculate the average of n numbers using array(n < 10).
/*#include <stdio.h>
int main()
{
    int num[10], sum = 0, avg, n;
    printf("enter total numbers : ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        printf("enter number%d : ", i + 1);
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    avg = sum / n;
    printf("average is = %d", avg);

    return 0;
}*/


// Write a C program to find the smallest and largest number and their positions using array.
/*#include <stdio.h>
int main(void)
{
    int a[6], small, large, small_position, large_position,i;
    printf("enter six numbers : ");

    for(i=0;i<6;i++)
    {
        scanf("%d", &a[i]);
    }

    small = a[0];
    small_position = 0;
    
    for(i=1;i<6;i++)
    {
        if(a[i]<small)
        {
            small = a[i];
            small_position = i;
        }
    }

    large = a[0];
    large_position = 0;

    for(i=1;i<6;i++)
    {
        if(a[i]>large)
        {
            large = a[i];
            large_position = i;
        }
    }

    printf("small = %d\n", small);
    printf("small_position = %d\n", small_position);
    printf("large = %d\n", large);
    printf("large_position = %d\n", large_position);

    return 0;
}*/