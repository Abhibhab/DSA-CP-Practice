#include <stdio.h>

 unsigned long long fact(unsigned long input)
{
    if (input == 0)
            return 1;
    else    
        return input * fact(input - 1);
}


void ff()
{

      int input;

    printf("Enter an integer to find the factorial of: ");
    scanf("%d", &input);

    printf("The Factorial of %d = %llu\n" , input, fact(input)); 

    
}

void pro()
{

    int n, i, m = 0, flag = 0;

    printf("Enter the number to check prime:");

    scanf("%d", &n);

    m = n/2;

    for (i = 2; i <= m; i++)

    {

        if (n % i == 0)

        {

            printf("Number is not prime");

            flag = 1;

            break;
        }
    }

    if (flag == 0)

        printf("Number is prime");
}

int main()
{

    char choice;

    do

    {

        int goog;

        printf("Enter 1. to calculate the factorial of a given number or 2. to check the number is prime or not:");

        scanf("%d", &goog);

        if (goog == 1)

        {

            ff();
        }

        else if (goog == 2)

        {

            pro();
        }

        else

        {

            printf("Invalid choice");
        }

        printf("\n Do you want to continue? (Press y/n)");

        scanf(" %c", &choice);

    }

    while (choice == 'y');

    return 0;
}
