/*#include <stdio.h>
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j=1;j<=5;j++)
        {
            if( j <= i)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}*/



// #include <stdio.h>
// int main()
// {
//     for(int i = 1; i <= 5; i++)
//     {
//         for(int j = 1; j <= 5; j++)
//         {
//             if( j >= 6-i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>
// int main()
// {
//     for(int i = 1; i <= 5; i++)
//     {
//         for(int j = 1; j <= 5; j++)
//         {
//             if( j <= 6-i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     for(int i = 1; i <= 3; i++)
//     {
//         for(int j = 1; j <= 5; j++)
//         {
//             if(j>=4-i && j<=2+i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf("");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     for(int i = 1; i <= 5; i++)
//     {
//         for(int j = 1; j <= 5; j++)
//         {
//             if( j >= i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     for(int i = 1; i <= 5; i++)
//     {
//         for(int j = 1; j <= 5; j++)
//         {
//             if(j<=6-i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=5; j++)
//         {
//             if((j>=4-i &&  j<= 2+i) && (j>=i-2 && j<=8-i))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




/*#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}*/


// #include <stdio.h>
// int main()
// {

    
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=9;j++)
//         {
//             if(j<=6-i || j>=4+i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;

// }




/*#include <stdio.h>

int main() {
  // Prompt the user to enter a number
  printf("Enter a number: ");

  // Read the number from standard input
  int num;
  scanf("%d", &num);

  // Store the reversed number in a variable
  int reversed = 0;

  // Reverse the input number
  while (num > 0) {
    reversed = reversed * 10 + (num % 10);
    num /= 10;
  }

  // Print the reversed number
  printf("The reversed number is: %d\n", reversed);

  return 0;
}*/




