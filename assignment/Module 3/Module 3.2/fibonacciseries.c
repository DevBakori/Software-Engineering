#include <stdio.h>
int main()
{
   int number, i = 0, Next, first = 0, second = 1;
   printf("\n Enter the Number: ");
   scanf("%d",&number);
   while(i < number)
   {
      if(i <= 1){
         Next = i;
      }
      else{
         Next = first + second;
         first = second;
         second = Next;
      }
      printf("%d \n", Next);
      i++;
   }
   return 0;
}
