#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    unsigned long long int fact=1;

    //f=factorial
    //no=input number
    printf("Enter any number : ");
    scanf("%d",&num);
    //fac=factorial
    //num=enter a number

    if(num<0)
    {
        printf("number is not valid");
    }

    else
    {
       for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d= %llu",num,fact);
    }


    return 0;
}

