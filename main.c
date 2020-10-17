#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,i,f;
    unsigned long long int fact=1;
    //f=factorial
    //no=enter a number
    printf("insert any number: ");
    scanf("%d",&no);

    if(no<0)
    {
        printf("number is not valid");
    }

    else
    {
       for(i=0;i<=no;i++)
        {
            fact=f*i;
        }
        printf("Factorial of %d= %llu",no,f);
    }


    return 0;
}
