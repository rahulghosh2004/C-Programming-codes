// write a C program for arranging the elements using the bubble shot method.
/*
#include <stdio.h>
int main()
{
    int a[10], i, j, swap;
    printf("enter 10 elements \n");

    for(i=0; i<10; i++)
    {
        printf("\n element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<10-1; i++)
    {
       for(j=0; j<10-1-i; j++)
       {
          if(a[j]>a[j+1])
          {
            swap = a[j];
            a[j] = a[j+1];
            a[j+1] = swap;
          }
       }
    }

    printf("sorted list of the array is given below \n");

    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
*/

// write a C program for arranging the elements using selection sort method.
/*
#include <stdio.h>
int main()
{
    int a[5], i, j, pos, swap;
    printf("enter five elements \n");

    for(i=0; i<5; i++)
    {
        printf("\nelement %d : ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++)
    {
        pos = i;
        for(j=i+1; j<5; j++)
        {
            if(a[pos]>a[j])
            {
                pos = j;
            }
            if(a[pos] != i)
            {
                swap = a[i];
                a[i] = a[pos];
                a[pos] = swap;
            }
        }
    }

    printf("the sorted array is given below \n");

    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int marks[10];
    printf("enter 10 marks \n");

    for(int i=0; i<10; i++)
    {
        printf("\nmarks %d : ", i+1);
        scanf("%d", &marks[i]);
    }

    for(int i=0; i<10; i++)
    {
        if(marks[i] < 35)
        {
            printf("Roll No : %d\n", i);
        }
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int arr[5] = {1,2,4,1,1};
    printf("%u\n",&arr[0]);
    printf("%u\n",&arr[1]);
    printf("%u\n",&arr[2]);
    printf("%u\n",&arr[3]);
    printf("%u\n",&arr[4]);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int arr[26], temp;
    arr[0] = 100;
    arr[25] = 200;
    temp = arr[25];
    arr[25] = arr[0];
    arr[0] = temp;
    printf("\n %d %d", arr[0], arr[25]);

    return 0;
}
*/

/*#include <stdio.h>
int main()
{
    int sub[50], i;
    for(i=0; i<=48; i++);
    {
        sub[i] = i;
        printf("%d", sub[i]);
    }

    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int i, a=2, b=3;
    int arr[2 + 3];
    for(i=0; i<a+b; i++)
    {
        scanf("%d", &arr[i]);
        printf("\n%d", arr[i]);
    }

    return 0;
}
*/

// write a c program to calculate the sum of all the elements in the given array.
/*
#include <stdio.h>
#define size 100
int main()
{
    int a[size], i, sum = 0;
    printf("enter 4 elements \n");

    for(i=0; i<4; i++)
    {
        printf("\nelement %d : ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<4; i++)
    {
        sum += a[i];
    }

    printf("\nsum = %d", sum);

    return 0;
}
*/

// write a c program to calculate the product of all the elements in the given array.
/*
#include <stdio.h>
int main()
{
    int size, pro = 1;
    printf("enter size of an array : ");
    scanf("%d", &size);
    int a[size];

    for(int i=0; i<size; i++)
    {
        printf("element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    for(int i=0; i<size; i++)
    {
        pro *= a[i];
    }

    printf("product : %d", pro);

    return 0;
}
*/

// write a c program to find the smallest value out of all the elements in the array.
/*
#include <stdio.h>
int main()
{
    int size;
    printf("enter the size of this array : ");
    scanf("%d", &size);
    int arr[size], i, small;

    for(i=0; i<size; i++)
    {
        printf("element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    small = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] < small)
        {
            small = arr[i];
        }
    }

    printf("smallest element is : %d", small);

    return 0;
}
*/

// write a c program to find the largest value out of all the elements in the array.
/*
#include <stdio.h>
int main()
{
    int size;
    printf("enter the size of this array : ");
    scanf("%d", &size);
    int arr[size], i, large;

    for(i=0; i<size; i++)
    {
        printf("element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    large = arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }

    printf("largest element : %d", large);

    return 0;
}
*/

// Write a C program for searching the minimum and maximum elements in a given array.
/*#include <stdio.h>
#define size 10

int main()
{
    int arr[size], i, maximum, minimum;

    for(i=0; i<size; i++)
    {
        printf("\nelement %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    maximum = arr[0];
    minimum = arr[0];

    for(i=0; i<size; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    for(i=0; i<size; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    printf("maximum element : %d\n", maximum);
    printf("minimum element : %d", minimum);

    return 0;
}*/

/*#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, minimum;
    minimum = INT_MAX;
    for(int i=0; i<10; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    printf("minimum = %d", minimum);

    return 0;
}*/

/*#include <stdio.h>
void function(int a[])
{
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}
int main()
{
    int arr[2] = {1,2};
    printf("%d %d\n", arr[0], arr[1]);
    function(arr);
    printf("%d %d", arr[0], arr[1]);
    return 0;
}*/

// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
/*#include <stdio.h>
int main()
{
    int size;
    printf("size of array : ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Odd indexed values are given below \n");
    for(int i=0; i<size; i++)
    {
        if(i % 2 != 0)
        {
            arr[i] = arr[i] * 2;
            printf("%d\t", arr[i]);
        }
    }

    printf("\nEven indexed values are given below\n");
    for(int i=0; i<size; i++)
    {
        if(i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}*/

// Count the number of elements in given array greater than a given number.
/*#include <stdio.h>
int main()
{
    int arr[10], count = 0, i, given_number;
    printf("enter number : ");
    scanf("%d", &given_number);
    for(i=0; i<10; i++)
    {
        printf("%d element : ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++)
    {
        if(arr[i] > given_number)
        {
            count = count + 1;
        }
    }

    printf("The number is = %d ", count);

    return 0;
}*/

// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
/*#include <stdio.h>
int main()
{
    int size;
    printf("size of this array : ");
    scanf("%d", &size);
    int arr[size], i, odd_sum = 0, even_sum = 0, diff;

    for(i=0; i<size; i++)
    {
        printf("%d element : ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        if(i % 2 == 0)
        {
            even_sum = even_sum + arr[i];
        }
    }

    for(i=0; i<size; i++)
    {
        if(i % 2 != 0)
        {
            odd_sum = odd_sum + arr[i];
        }
    }

    diff = even_sum - odd_sum;
    printf("\nDifference = %d", diff);

    return 0;
}*/

// Find the total number of pairs in the array whose sum is equal to the given value x.
/*
#include <stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8}, pair, i, j, num;
    num = 12;
    pair = 0;
    for(i=0; i<8; i++)
    {
        for(j=i+1; j<8; j++)
        {
            if(arr[i] + arr[j] == num)
            {
                pair++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }

    printf("pairs = %d", pair);

    return 0;
}
*/

// Count the number of triplets whose sum is equal to the given value num.
/*#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8}, i, j, k, num, pair;
    num = 12;
    pair = 0;

    for(i=0; i<8; i++)
    {
        for(j=i+1; j<8; j++)
        {
            for(k=j+1; k<8; k++)
            {
                if(arr[i] + arr[j] + arr[k] == 12)
                {
                    pair++;
                    printf("\n(%d,%d,%d)", arr[i], arr[j], arr[k]);
                }
            }
        }
    }

    printf("\npair = %d", pair);
    return 0;
}*/

// Find the second largest element in an given array.
/*#include <stdio.h>
int main()
{
    int arr[] = {5,4,3,2,1}, max, sec_max, i;
    sec_max = arr[0];

    for(i=0; i<5; i++)
    {
        if(arr[i] > sec_max)
        {
            sec_max = arr[i];
            max = sec_max;
        }
    }

    for(i=0; i<5; i++)
    {
        if(arr[i] > sec_max && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }

    printf("%d", sec_max);

    return 0;
}*/

// Twenty five numbers are entered from the keyword into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many are odd.
/*#include <stdio.h>
void main()
{
    int a[25], i, count_pos = 0, count_neg = 0, count_even = 0, count_odd = 0;
    for(i=0; i<25; i++)
    {
        printf("%d element : ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<25; i++)
    {
        if(a[i] > 0)
        {
            count_pos = count_pos + 1;
        }
        else
        {
            count_neg = count_neg + 1;
        }
    }

    for(i=0; i<25; i++)
    {
        if(a[i] % 2 == 0)
        {
            count_even = count_even + 1;
        }
        else
        {
            count_odd = count_odd + 1;
        }
    }

    printf("positive = %d\n", count_pos);
    printf("negative = %d\n", count_neg);
    printf("even = %d\n", count_even);
    printf("odd = %d\n", count_odd);
}*/

/*#include <stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,1,4}, i, j, count = 0;
    for(i=0; i<7; i++)
    {
        for(j=i+1; j<7; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>
void main()
{
    char userid[20], password[20];
    printf("enter user id : ");
    scanf("%s", &userid);
    printf("enter password : ");
    scanf("%s", &password);
    if(strcmp(userid, "iamrahulghoshinfo@gmail.com") == 0 && strcmp(password,"RG12rg!@") == 0)
    {
        printf("welcome chief!");
    }
    else
    {
        printf("Sorry!");
    }
}*/

// Write a C program to create a login form and identify the wrong input.
/*#include <stdio.h>
#include <string.h>
void main()
{
    char userid[30], password[30];
    char _userid[30] = "iamrahulghoshinfo@gmail.com";
    char _password[30] = "RG12rg!@";

    printf("User Id : ");
    scanf("%s", &userid);
    printf("Password : ");
    scanf("%s", &password);

    if(strcmp(userid,_userid) == 0 && strcmp(password,_password) == 0)
    {
        printf("Welcome Chief!");
    }
    else
    {
        printf("Sorry Chief!");
    }
}*/

// Write a C program to create a loan calculator using only simple interest formula.
/*#include <stdio.h>
void main()
{
    float amount, interest_rate, duration, interest, total_amount, installment;

    printf("Enter your amount : ");
    scanf("%f", &amount);
    printf("Rate of Interest : ");
    scanf("%f", &interest_rate);
    printf("Loan period (in months) : ");
    scanf("%f", &duration);

    interest = (amount * interest_rate * duration) / 100;
    total_amount = amount + interest;
    installment = total_amount / duration;

    printf("Payable loan amount with interest : %f/-\n", total_amount);
    printf("Payable interest amount : %f/-\n", interest);
    printf("Monthly installment amount : %f/-\n", installment);
}*/

// Write a C program to multiple two matrices.
/*#include <stdio.h>
void main()
{
    int mat1[2][2], mat2[2][2], mat[2][2], i, j;
    printf("enter elements for matrix 1, \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("element [%d][%d] : ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter elements for matrix 2, \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("element [%d][%d] : ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            mat[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
    printf("Multiple of two matrices is ,\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
}*/



/*#include <stdio.h>
#include <string.h>
void main()
{
    char input[20];
    int i, j, len, flag = 0;
    printf("enter any string : ");
    scanf("%s", &input);
    len = strlen(input);
    for(i=0; i<len; i++)
    {
        if(input[i] != input[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        printf("%s not palindrome", input);
    }
    else
    {
        printf("%s is palindrome", input);
    }
}*/



/*#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    printf("enter any string : ");
    scanf("%s", &str);
    strrev(str);
    printf("%s", str);
}*/



/*#include <stdio.h>
#include <math.h>
void main()
{
    int num, rem, sum = 0, temp;
    printf("enter any integer : ");
    scanf("%d", &num);
    temp = num;

    while(num != 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;trrr
        num = num / 10;
    }

    if(sum == temp)
    {
        printf("%d is an armstrong number", sum);
    }
    else
    {
        printf("%d is not an armstrong number", sum);
    }
}*/

