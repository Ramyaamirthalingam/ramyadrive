#include <stdio.h>
void main()
{
    int num, i, f = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    for(i=2; i<=n/2; ++i)
    {
       
        if(n%i==0)
        {
            f=1;
            break;
        }
    }

    if (f==0)
        printf("%d is a prime number.",num);
    else
        printf("%d is not a prime number.",num);
   
}
