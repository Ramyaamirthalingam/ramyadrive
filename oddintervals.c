#include <stdio.h>
 
int main()
{
    int i, num;
     
    printf("Print odd numbers till: ");
    scanf("%d", &num);
 
    printf("All odd numbers from 1 to %d are: \n", num);
 
    
    for(i=1; i<=num; i++)
    {
       
        if(i%2!=0)
        {
            printf("%d\num", i);
        }
    }
 
    return 0;
}
