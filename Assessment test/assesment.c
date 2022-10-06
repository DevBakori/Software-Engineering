#include<stdio.h>
int q;
int data()
{
	int fp;
	int ch=0;
	char b;
	do
	{
		printf("\n enter your choice:");
		scanf("%d",&ch);
		
		printf("\n enter the quantity:");
		scanf("%d",&q);
		
		switch(ch)
		{
			case 1:
			fp=q*180;
				printf("final price of pizza is:%d \n",fp);
				break;
			
			case 2:
			fp=q*100;
				printf("final price of pizza is:%d \n",fp);
				break;
				
			case 3:
			fp=q*120;
				printf("final price of pizza is:%d \n",fp);
				break;
				
			case 4:
			fp=q*50;
				printf("final price of pizza is:%d \n",fp);
				break;
				
			case 5:
			return 0;
				break;
				
			default:
				printf("\nenter valid choice:||| \n ");
				break;
			
		}
		printf("Do you want place more order \n y/n");
		scanf("%c",&b);
		if(b=="n")
		{
			return 0;
		}
	}
	while (ch !=5);
}
int main()
{
	printf("\n ....MENU....\n");
	printf("\n1. PIZZA		price=180rs/pcs\n");
	printf("\n2. BURGER		price=100rs/pcs\n");
	printf("\n3. DHOSA		price=120rs/pcs\n");
	printf("\n4. IDLI		price=50rs/pcs\n");
	printf("\n5. EXIT	PROPGRAM \n");
	data();
}
