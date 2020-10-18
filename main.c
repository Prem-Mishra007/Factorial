#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,fac;
    unsigned long long int fact=1;
    //fac=factorial
    //num=enter a number
    printf("insert any number: ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("number is not valid");
    }

    else
    {
       for(i=0;i<=num;i++)
        {
            fact=fac*i;
        }
        printf("Factorial of %d= %llu",num,fac);
    }


    return 0;
}
