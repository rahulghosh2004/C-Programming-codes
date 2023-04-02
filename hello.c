// #include <stdio.h>

// int main(void)
// {
//     char input;

//     // Get input from the user
//     printf("Enter a character: ");
//     scanf("%c", &input);

//     // Check if the input is '0' or '1'
//     if (input == '0')
//     {
//         printf("The input is '0'\n");
//     }
//     else if (input == '1')
//     {
//         printf("The input is '1'\n");
//     }
//     else
//     {
//         printf("The input is neither '0' nor '1'\n");
//     }

//     return 0;
// }

// WACP to check the biggest value in between two values.
// #include <stdio.h>
// int main()
// {
//     int v1, v2;
//     printf("enter two values : ");
//     scanf("%d%d", &v1, &v2);

//     if (v1 != v2)
//     {
//         if (v1 > v2)
//         {
//             printf("%d is the biggest value", v1);
//         }
//         else
//         {
//             printf("%d is the biggest value", v2);
//         }
//     }
//     else
//     {
//         printf("Both values are equal");
//     }

//     return 0;
// }

// WACP to check the addition of two numbers is more than '100’ or not, if it is less than '100’ increase the value by half of the calculated value.
// #include <stdio.h>
// int main()
// {
//     int n1, n2, sum, iv;
//     printf("enter two numbers : ");
//     scanf("%d%d", &n1, &n2);

//     sum = n1 + n2;
//     iv = (float)sum + (sum / 2.0);

//     if (sum > 100)
//     {
//         printf("the addition of two numbers is more than 100");
//     }
//     else
//     {
//         printf("the addition of two numbers is not more than 100\n");
//         printf("So the value is increased by half of the calculated value and the final value is %d", iv);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char name[100]; // Declare a character array to store the name

//     printf("Enter your name: ");
//     scanf("%s", name); // Read the name from the user

//     // Check the first character of the name
//     if (isalpha(name[0]))
//     {                                       // If it is an alphabetical character
//         printf("Your name is: %s\n", name); // Print the name
//     }
//     else
//     {
//         printf("The first character of your name is not an alphabetical character.\n");
//     }

//     return 0;
// }

// WACP to check ‘odd’ or ‘even’ number which is given by user.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);

//     if (n != 0)
//     {
//         if (n % 2 == 0)
//         {
//             printf("%d is an even number", n);
//         }
//         else
//         {
//             printf("%d is an odd number", n);
//         }
//     }
//     else
//     {
//         printf("its value is zero");
//     }
//     return 0;
// }

// WACP to check biggest number in between three numbers.
// #include <stdio.h>
// int main()
// {
//     int n1,n2,n3;
//     printf("enter three numbers : ");
//     scanf("%d%d%d", &n1,&n2,&n3);

//     if(n1!=n2 && n2!=n3)
//     {
//         if(n1>n2 && n1>n3)
//         {
//             printf("%d is the biggest number in between three numbers", n1);
//         }
//         else if(n2>n1 && n2>n3)
//         {
//             printf("%d is the biggest number in between three numbers", n2);
//         }
//         else
//         {
//             printf("%d is the biggest number in between three numbers", n3);
//         }
//     }
//     else
//     {
//         printf("both three numbers are zero");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char userID[100];  // Declare a character array to store the user ID
//   char password[100];  // Declare a character array to store the password

//   printf("Enter your user ID: ");
//   scanf("%s", &userID);  // Read the user ID from the user

//   printf("Enter your password: ");
//   scanf("%s", &password);  // Read the password from the user

//   // Check if the user ID and password are correct
//   if (strcmp(userID, "user123") == 0 && strcmp(password, "password123") == 0) {
//     printf("Welcome!\n");  // User ID and password are correct
//   } else {
//     printf("User ID and password incorrect.\n");  // User ID and password are not correct
//   }

//   return 0;
// }

//  #include <stdio.h>
//  #include <string.h>

//  #define MAX_USERNAME_LENGTH 20
//  #define MAX_PASSWORD_LENGTH 20

//  int main(void)
//  {
//      char username[MAX_USERNAME_LENGTH + 1];
//      char password[MAX_PASSWORD_LENGTH + 1];
//      char correctUsername[] = "admin";
//      char correctPassword[] = "password";

//      printf("Enter username: ");
//      scanf("%s", username);
//      printf("Enter password: ");
//      scanf("%s", password);

//      if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0)
//      {
//          printf("Login successful!\n");
//      }
//      else
//      {
//          printf("Incorrect username or password.\n");
//      }

//      return 0;
//  }

// 11. WACP to check the season as per given temperature :  Summer 32° above, Spring & Autumn 31° - 15°,  Winter Less than 15°.
// #include <stdio.h>
// int main(void)
// {
//     float temp;
//     printf("enter a temperature : ");
//     scanf("%f", &temp);

//     if (temp > 0 && temp < 47)
//         {
//             if (temp > 32)
//             {
//                 printf("summer season");
//             }
//             else if (temp >= 15 && temp <= 31)
//             {
//                 printf("spring or autumn season");
//             }
//             else if (temp < 15)
//             {
//                 printf("winter season");
//             }
//         }
//         else
//         {
//             printf("invalid temperature");
//         }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
//{
//     float m1,m2,m3; // m1,m2,m3 are three marks
//     float total_marks;

//    printf("first subject : ");
//    scanf("%f", &m1);

//    printf("second subject : ");
//    scanf("%f", &m2);

//    printf("third subject : ");
//    scanf("%f", &m3);
//    total_marks = m1 + m2 + m3;

//    if(total_marks <= 100)//
//    {
//        if(total_marks < 40)
//        {
//            printf("fail !");
//        }
//        else if(total_marks >= 41 && total_marks <= 50)
//        {
//            printf("3rd dividion");
//        }
//        else if(total_marks >= 51 && total_marks <= 60)
//        {
//            printf("2nd division");
//        }
//        else if(total_marks >= 61 && total_marks <= 75)
//        {
//            printf("1st division");
//        }
//        else
//        {
//            printf("star !");
//        }
//    }
//    else
//    {
//        printf("invalid marks");
//    }

//    return 0;
//}

/*#include<stdio.h>
int main()
{
    float principal_amt, rate_of_interest, days, interest;
    const int yearInDays = 365;

    printf( "Input loan amount (0 to quit): " );
    scanf( "%f", &principal_amt );

    while( (int)principal_amt != 0)
    {
        printf( "Input interest rate: " );
        scanf( "%f", &rate_of_interest );
        printf( "Input term of the loan in days: " );
        scanf( "%f", &days );

        interest = (principal_amt * rate_of_interest * days )/ yearInDays;
        printf( "The interest amount is $%.2f\n", interest );

        printf( "\n\nInput loan principal_amt (0 to quit): " );
        scanf( "%f", &principal_amt );
    }

    return 0;
}*/

/*#include <stdio.h>
int main(void)
{
    double loan_amount, months;
    double interest_rate, interest, payable_amount,installment;

    printf("enter loan amount : ");
    scanf("%lf", &loan_amount);

    printf("loan period in month : ");
    scanf("%lf", &months);

    printf("interest rate : ");
    scanf("%lf", &interest_rate);

    interest = (loan_amount * interest_rate * months) / 100.0;
    payable_amount = loan_amount + interest;
    installment = payable_amount / months;

    printf("interest for the loan amount = %lf/-\n", interest);
    printf("total payable amount = %lf/-\n", payable_amount);
    printf("monthly installment = %lf/-\n", installment);

    return 0;
}*/

/*#include <stdio.h>
int main(void)
{
    int BASIC_SALARY;
    float da, hra, medical, tax, TOTAL_SALARY;

    printf("Basic Salary : ");
    scanf("%d", &BASIC_SALARY);

    if (BASIC_SALARY != 0 && BASIC_SALARY > 0)
    {
        if (BASIC_SALARY < 3000)
        {
            da = (BASIC_SALARY * 100) / 100;
            hra = (BASIC_SALARY * 20) / 100;
            medical = (BASIC_SALARY * 10) / 100;
            tax = 0;
            TOTAL_SALARY = (BASIC_SALARY + da + hra + medical) - tax;

            printf("Total Salary : %f\n", TOTAL_SALARY);
            printf("D.A : %f\n", da);
            printf("HRA : %f\n", hra);
            printf("Medical : %f\n", medical);
            printf("Tax : %f\n", tax);
        }
        else if (BASIC_SALARY >= 3001 && BASIC_SALARY <= 5000)
        {
            da = (BASIC_SALARY * 70) / 100;
            hra = (BASIC_SALARY * 15) / 100;
            medical = (BASIC_SALARY * 10) / 100;
            tax = (BASIC_SALARY * 10) / 100;
            TOTAL_SALARY = (BASIC_SALARY + da + hra + medical) - tax;

            printf("Total Salary : %f\n", TOTAL_SALARY);
            printf("D.A : %f\n", da);
            printf("HRA : %f\n", hra);
            printf("Medical : %f\n", medical);
            printf("Tax : %f\n", tax);
        }
        else if (BASIC_SALARY > 5000)
        {
            da = (BASIC_SALARY * 40) / 100;
            hra = (BASIC_SALARY * 10) / 100;
            medical = 500;
            tax = (BASIC_SALARY * 30) / 100;
            TOTAL_SALARY = (BASIC_SALARY + da + hra + medical) - tax;

            printf("Total Salary : %f\n", TOTAL_SALARY);
            printf("D.A : %f\n", da);
            printf("HRA : %f\n", hra);
            printf("Medical : %f\n", medical);
            printf("Tax : %f\n", tax);
        }
    }
    else
    {
        printf("sorry! your salary may not invalid");
    }

        return 0;
    }*/

/*#include <stdio.h>

int main()
{
    // Declare a variable to store the temperature
    int temperature;

    // Read the temperature
    printf("Enter the temperature: ");
    scanf("%d", &temperature);

    // Check the season based on the temperature
    switch (temperature)
    {
    case 100:
    case 33:
        printf("summer");
        break;
    case 32:
    case 15:
        printf("spring & Autumn");
        break;
    case 14:
        printf("winter");
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}*/