#include<stdio.h>]
void main()
{
	int a,b,c=1,d=10;
	for(a=1;a<5;a++)
	{
		for(b=1;b<a;b++)
		{
			printf("%d\t",c);
			c++;
		}
		printf("\n");
	}
	for (a=1;a<5;a++)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d\t",d);
			d++;
		}
		printf("\n");
	}
}