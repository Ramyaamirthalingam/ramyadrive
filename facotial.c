#include <stdio.h>
void main()
{
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&num);

  
    if (num < 0)
        printf("Error! ");

    else
    {
        for(i=1; i<=num; ++i)
        {
            factorial *= i;             
        }
        printf("Factorial of %d = %llu", num, factorial);
    }


}
