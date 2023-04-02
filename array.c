/*#include <stdio.h>
int main(void)
{
    int arr[5],sum = 0;
    float avg;

    printf("enter five numbers : ");

    for(int i = 0; i <= 4; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
        avg = sum / 5.0;
    }

    printf("average of five numbers = %f",avg);
    return 0;
}*/


/*#include <stdio.h>
int main(void)
{
    int arr[5], sum = 0;
    float avg;
    printf("enter five numbers : ");

    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        sum = sum + i;
        avg = sum / 5.0;
    }
    printf("%f", avg);
    return 0;
}*/


// Write an array in c program to reverse 10 numbers.
/*#include <stdio.h>
int main(void)
{
    int a[10] = {9,8,7,6,5,4,3,2,1,0};
    int i;
    
    // we are going to print the numbers
    for(i=0; i<=9; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");

    //Now we are going to the numbers in reverse order
    for(i=9; i>=0; i--)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}*/


// Write a C program to add 10 numbers using array.
/*#include <stdio.h>
int main(void)
{
    int arr[10],i,sum = 0;
    printf("enter 10 values : ");

    for(i=0; i<=9; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<=9; i++)
    {
        sum = sum + i;
    }
    printf("addition = %d", sum);

    return 0;
}*/


/*#include <stdio.h>
int main(void)
{
    int a[] = {5,6};
    int sum;

    sum = a[0] + a[1];
    printf("sum = %d", sum);

    return 0;
}*/


/*#include <stdio.h>
int main(void)
{
    int a[5], sum = 0;

    printf("enter five numbers : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    printf("sum = %d", sum);

    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10},n;
    printf("enter number : ");
    scanf("%d", &n);

    for(int i=0;i<10;i++)
    {
        printf("%d * %d = %d\n", n,a[i],a[i]*n);
    }

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


// C Program To find largest and smallest number and their positions
/*#include <stdio.h>
int main()
{
    int a[5], small,large,s_position,l_position,i;
    printf("enter five numbers : ");

    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }

    small = a[0];
    s_position = 0;

    for(i=1;i<5;i++)
    {
        if(a[i]<small)
        {
            small = a[i];
            s_position = i;
        }
    }

    large = a[0];
    l_position = 0;
    
    for(i=1;i<5;i++)
    {
        if(a[i]>large)
        {
            large = a[i];
            l_position = i;
        }
    }

    printf("small number : %d\n", small);
    printf("small number position : %d\n", s_position);
    printf("large number : %d\n", large);
    printf("large number position : %d\n", l_position);

    return 0;

}*/

// C program to input and print n elements in an array
/*
#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int a[MAX_SIZE], n, i;
    printf("Enter the size of this array : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);
    for(i=0;i<n;i++)
    {
        printf("element%d : ",i+1);
        scanf("%d", &a[i]);
    }

    printf("The elements are given below,-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
*/

// C program to find sum of all elements of an array
/*
#include <stdio.h>
#define size 100

int main()
{
    int num[size], n, i, sum = 0;
    printf("enter the size of this array : ");
    scanf("%d", &n);

    printf("enter %d numbers : \n", n);
    for(i=0;i<n;i++)
    {
        printf("\n enter number%d : ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum + num[i];
    }
    printf("sum = %d", sum);

    return 0;
}
*/

// C program to find maximum and minimum element in array
/*
#include <stdio.h>

int main()
{
    int a[5], i, mini_ele, max_ele;

    printf("enter 5 elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }

    mini_ele = a[0];
    for(i=1;i<5;i++)
    {
        if(a[i] < mini_ele)
        {
            mini_ele = a[i];
        }
    }

    max_ele = a[0];
    for(i=1;i<5;i++)
    {
        if(a[i] > max_ele)
        {
            max_ele = a[i];
        }
    }

    printf("Minimum element is : %d\n", mini_ele);
    printf("Maximum element is : %d\n", max_ele);

    return 0;
}
*/

// C program to find second largest number in an array


// C program to copy all elements of one array to another
// C program to insert an element in array
// C program to delete an element from an array
// C program to print all unique element in an array
// C program to print all negative elements in an array
// C program to count even and odd elements in an array
// C Program to sort an array in ascending order using bubble sort
// C Program to sort an array in descending order using bubble sort
// C program to count total number of negative elements in array
// C program count total number of duplicate elements in an array
// C program to delete all duplicate elements from an array
// C program to count frequency of each element in an array
// C program to merge two sorted array in ascending order
// C Program to merge two sorted array in descending order
// C program to find reverse of an array
// C program to put even and odd elements of array in two separate array
// C program to search an element in the array
// C program to sort an array in ascending order
// C program to sort an array in descending order
// C program to sort even and odd elements of array separately
// C Program to search an element in an array using Binary search
// C Program to search an element in an array using linear search
// C program to replace all Even elements by 0 and Odd by 1
// C Program to Find Union & Intersection of 2 Arrays
// C Program to implement Stack Operations Using Arrays
// C Program to Implement a Queue using an Array
// C Program to Calculate Addition of All Elements in Array
// C Program to Merge Sort of two different arrays
// C Program to find Mean, Variance and Standard deviation of n numbers
// C program to find GCD(HCF) of N numbers using Arrays
// C Program to input values into an array and display them
// C Program to pass array elements to a function
// C Program to pass array to function to calculate sum
// C Program to print value and address of elements of an array without pointer
// C Program to print value and address of elements of an array using pointer
// C Program to enter Student Details using array of structures
// C Program to understand arrays within structures
// C Program to understand how array of structures sent to function


/*
#include <stdio.h>
int main(void)
{
    int marks[3];

    printf("enter physics : ");
    scanf("%d", &marks[0]);

    printf("enter chemistry : ");
    scanf("%d", &marks[1]);

    printf("enter math : ");
    scanf("%d", &marks[2]);

    printf("physics = %d, chemistry = %d & math = %d", marks[0], marks[1], marks[2]);

    return 0;
}
*/


/*
#include <stdio.h>
int main(void)
{
    int price[3];

    printf("enter 3 prices : ");
    scanf("%d", price[0]);
    scanf("%d", price[1]);
    scanf("%d", price[2]);

    printf("price 1 with gst : %f\n", price[0] + (.18 * price[0]));
    printf("price 2 with gst : %f\n", price[1] + (.18 * price[1]));
    printf("price 3 with gst : %f\n", price[2] + (.18 * price[2]));

    return 0;
}
*/


/*
#include <stdio.h>

int main()
{
    int aadhar[5];

    for(int i=0 ; i<5; i++)
    {
        printf("enter %d aadhar : ", i+1);
        scanf("%d", &aadhar[i]);
    }

    for(int i=0 ; i<5; i++)
    {
        printf("%d\n", aadhar[i]);
    }

    return 0;
}
*/


// Write a C program to print the odd numbers using array.
/*
#include <stdio.h>
int main()
{
    int arr[7],i;
    printf("enter 7 numbers \n");

    for(i=0; i<7; i++)
    {
        printf("enter %d number : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("even numbers are given below \n");
    for(i=0; i<7; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");

    printf("odd numbers are given below\n");
    for(i=0; i<7; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d, ", arr[i]);
        }
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int num[40], i;
    for(i=0; i<=99; i++)
    {
        num[i] = i;
    }
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int i = 1, *x;
    float j = 1.5, *y;
    char k = '*', *z;

    printf("value of i = %d\n", i);
    printf("value of j = %f\n", j);
    printf("value of k = %c\n", k);
    printf("\n");

    x = &i;
    y = &j;
    z = &k;

    printf("original address in x = %u\n", x);
    printf("original address in y = %u\n", y);
    printf("original address in z = %u\n", z);
    printf("\n");

    x++;
    y++;
    z++;

    printf("new address in x = %u\n", x);
    printf("new address in y = %u\n", y);
    printf("new address in z = %u\n", z);
    printf("\n");

    x--;
    y--;
    z--;

    printf("original address in x = %u\n", x);
    printf("original address in y = %u\n", y);
    printf("original address in z = %u\n", z);
    printf("\n");

    return 0;
}
*/



/*
#include <stdio.h>
int main()
{
    int num[] = {1,2,3,4,5,6};
    int i, *ptr;
    ptr = &num[0];

    for(i=0; i<=5; i++)
    {
        printf("address = %u, element = %d\n", ptr, *ptr);
        ptr++;
    }

    return 0;
}
*/



/*#include <stdio.h>
int main()
{
    int arr[5];
    printf("enter 5 elements \n");
    for(int i=0; i<5; i++)
    {
        printf("element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=4; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/





// 1. Write a C Program to print your name 10 times using for loop.
/*#include <stdio.h>
int main()
{
    for(int i=0; i<=10; i++)
    {
        printf("Rahul Ghosh\n");
    }

    return 0;

}*/




// 2. Write a C Program to print 1 – 10 using for loop.
/*#include <stdio.h>
int main()
{
    int i;
    for(i=0; i<=10; i++)
    {
        printf("%d\t", i);
    }

    return 0;
}*/




// 3. Write a C Program to calculate X^y.
/*#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,result;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    result = pow(x,y);
    printf("%d", result);

    return 0;
}*/


//4. Write a C Program to print the odd no from 100 to 200.
/*#include <stdio.h>
int main()
{
    int i;
    printf("Odd numbers are given below \n");
    for(i=100; i<=200; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}*/



//5. Write a C Program to print even no between a range. Range given by user.
/*#include <stdio.h>
int main()
{
    int num;
    printf("enter the range : ");
    scanf("%d", &num);

    for(int i=1; i<= num; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}*/




//6. Write a C Program to calculate 1 + 2 + 3 + 4………+ n.
/*#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter range : ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++)
    {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}*/



//7. Write a C Program to calculate 1 + 3 + 5 + 7……… + n.
/*#include <stdio.h>
int main()
{
    int n;
    printf("enter range : ");
    scanf("%d", &n);
    int sum = 0;

    for(int i=0; i<=n; i++)
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}*/


//8. Write a C Program to add two numbers and check the result is 500 or not. If it is less then 500 add 5 until it is more than 500.
/*#include <stdio.h>
#include <conio.h>

void main() {
    int num1, num2, sum;
    clrscr();
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    if(sum >= 500)
    {
        printf("sum is : %d\n", sum);
    }

    else if(sum != 500)
    {
        while (sum < 500) {
        sum += 5;
        }
        printf("the sum is : %d", sum);
    }
    
    getch();
}*/



//9. Write a C Program to calculate GCD of a no.
/*#include <stdio.h>
int main()
{
    int num1, num2, i, gcd;
    printf("1st number : ");
    scanf("%d", &num1);
    printf("2nd number : ");
    scanf("%d", &num2);

    for(i=1; i<=num1 && i<=num2; i++)
    {
        if(num1 % 2 == 0 && num2 % 2 == 0)
        {
            gcd = i;
        }
    }

    printf("Numbers are %d & %d\n", num1, num2);
    printf("GCD = %d", gcd);

    return 0;
}*/


//10. Write a C Program to check Armstrong no.
/*#include <stdio.h>

int main()
{
    int n, original_number, reminder, sum = 0;
    printf("enter number : ");
    scanf("%d", &n);
    original_number = n;

    while(original_number != 0)
    {
        reminder = original_number % 10;
        sum = sum + reminder*reminder*reminder;
        original_number = original_number / 10;
    }

    if(sum == n)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }

    return 0;
}*/


//11. Write a C Program to create Fibonacci series.
/*#include <stdio.h>
int main()
{
    int n, num1 = 0, num2 = 1, num3;
    printf("enter number : ");
    scanf("%d", &n);
    printf("Fibonacci Series : %d %d ", num1, num2);

    for(int i=3; i<n; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%d ", num3);
    }

    return 0;
}*/


//12. Write a C Program to check given no is prime or not.
/*#include <stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    for(int i=2; i<=n; i++)
    {
        if(n % 1 != 0 && n % n == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}*/


//13. Write a C Program to create an infinite loop using for loop.
/*#include <stdio.h>
#include <conio.h>
void main()
{
    
    for(int i=1; i>=1; i++)
    {
        printf("Fuck You\n");
    }
    getch();
}*/

//14. Write a C Program to print your name using array.
/*#include <stdio.h>
int main()
{
    char name[5] = {'R','a','h','u','l'};
    for(int i=0; i<5; i++)
    {
        printf("%c",name[i]);
    }

    return 0;
}*/


//15. Write a C Program to add the element present in the array.
/*#include <stdio.h>
#define size 5

int main()
{
    int arr[size], i, sum = 0;
    for(i=0; i<size; i++)
    {
        printf("%d indexed element : ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }

    printf("sum = %d", sum);

    return 0;
}*/


//16. Write a C Program to add two arrays.
/*#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5}, arr2[5] = {6,7,8,9,10}, sum, i;
    for(i=0; i<5; i++)
    {
        sum = arr[i] + arr2[i];
    }

    printf("%d", sum);

    return 0;
}*/



//17. Write a C Program to check palindrome number.
//18. Write a C Program to reverse the number.
//19. Write a C Program to create a matrix.
//20. Write a C Program to add two matrices.
//21. Write a C Program to multiply two matrices.
//22. Write a C Program to inverse of a matrix.




/*#include<stdio.h>

int main(){

  int a[3][3],i,j;
  float determinant=0;

  printf("Enter the 9 elements of matrix: ");
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
           scanf("%d",&a[i][j]);

  printf("\nThe matrix is\n");
  for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",a[i][j]);
  }

  for(i=0;i<3;i++)
      determinant = determinant + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

   printf("\nInverse of matrix is: \n\n");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++)
           printf("%.2f\t",((a[(i+1)%3][(j+1)%3] * a[(i+2)%3][(j+2)%3]) - (a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/ determinant);
       printf("\n");
   }

   return 0;
}*/




