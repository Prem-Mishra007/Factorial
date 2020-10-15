#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,i,f;
    unsigned long long int fact=1;
    //f=factorial
    //no=input number
    printf("Enter any number: ");
    scanf("%d",&no);

    if(no<0)
    {
        printf("#Invalid number#");
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
