#include <stdio.h>

int main()
{   
    int num[10],i;
    float avg;
    
    printf("Please Enter the 10 Numbers\n");
    for(i = 1; i <= 10; i++)
    {
        printf("Number %d = ", i);
        scanf("%d", &num[i]);
    }
     for(i=1;i<=10;i++)
     {
     	if(num[i]%2==0)
		printf("The number %d is even\n",num[i]);
	  else
		printf("The number %d is Odd\n",num[i]);
	 }
		return 0;
}

