#include<stdio.h>
int main()
{
	int a,b,c,d=5;
	for(a=1;a<=5;a++)
		{
			for(c=1;c<=d;c++)
			{
				printf(" ");
			}
			--d;
			for (b=1;b<=a;b++)
				{
					printf("%d ",b);
				}
				printf("\n");
		}
		d=1;
	for(a=5;a>=1;a--)
		{
			for(c=1;c<=d;c++)
			{
				printf(" ");
			}
			++d;
			for(b=1;b<=a;b++)
			{
				printf("%d ",b);
			}	
			printf("\n");
		}
}
