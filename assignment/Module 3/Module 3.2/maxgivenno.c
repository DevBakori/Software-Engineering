#include<stdio.h>
void main()
{
      int a[5],i,min=0,max=0;
      printf("Enter Five Value :");
      for(i=0;i<=4;i++)
          {
               scanf("%d",&a[i]);
          }
      for(i=0;i<=4;i++)
          {
              if(a[i]>max)
               {
                    max=a[i]; 
                   
               }
              else if(a[i]<min)
               {
                   min=a[i];
               }    
           }
            printf("Maximum is : %d\n",max);
			  return 0;
}

