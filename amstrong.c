#include <stdio.h>

int main() {
   int a = 153; 
   int check, rem, sum = 0;

   check = a;

   while(check != 0) {
      rem = check % 10;
      sum = sum + (rem * rem * rem);
      check = check / 10;
   }

   if(sum == a) 
      printf("%d is an armstrong number.", a);
   else 
      printf("%d is not an armstrong number.", a);

   return 0;
}
