#include<stdio.h>
int main(){
  int p,n,i=1;
  long int sum=1;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("Enter power: ");
  scanf("%d",&p);
  while(i<=p){
            sum=sum*n;
            i++;
  }
  printf("%d to the power %d is: %ld",n,p,sum);
  return 0;
}
