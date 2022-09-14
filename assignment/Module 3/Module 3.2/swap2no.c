#include <stdio.h>

int main()
{
   int a, b;

   printf("Enter Ist integer a= ");
   scanf("%d", &a);
   printf("\nEnter 2nd integer b= ");
   scanf("%d", &b);
  

   a = a + b;
   b = a - b;
   a = a - b;

   printf("\n Swapping Numbers are:\n ");
   printf("a=%d  b=%d \n",a,b);

   return 0;
}
