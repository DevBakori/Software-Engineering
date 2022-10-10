#include<stdio.h>
int tp;
int menu()
{
	printf("\n ....MENU....\n");
	printf("\n1. PIZZA		price=180rs/pcs\n");
	printf("\n2. BURGER		price=100rs/pcs\n");
	printf("\n3. DHOSA		price=120rs/pcs\n");
	printf("\n4. IDLI		price=50rs/pcs\n");
	printf("\n5. EXIT	PROPGRAM \n");
	return 0;
}
int data()
{
    menu();
	int fp, q;
	int ch=0;
    int b;
	do
	{
		printf("\n enter your choice:");
		scanf("%d",&ch);
		if(ch==5)
		{
		    return 0;
		}
		printf("\n enter the quantity:");
		scanf("%d",&q);
		
		switch(ch)
		{
			case 1:
			fp=q*180;
			printf("You have selected Pizza \n");
				printf("Amount is:%d \n",fp);
				break;
			
			case 2:
			fp=q*100;
	printf("You have selected Burger \n");
				printf("Amount is:%d \n",fp);
				
				break;
				
			case 3:
			fp=q*120;
	printf("You have selected Dosa\n ");
				printf("Amount is:%d \n",fp);
								break;
				
			case 4:
			fp=q*50;
	printf("You have selected Idli ");
				printf("Amount is:%d \n",fp);
								break;
				
		
				
			default:
				printf("\nenter valid choice:||| \n ");
				break;
			
		}
		tp=tp+fp;
		printf("Total amount %d\n ",tp);
		printf("Do you want place more order \n ");
		printf("Enter 1 for'Yes'. Enter 2 for 'No'");
		scanf("%d",&b);
		if(b==2)
		return 0;
		else if(b==1)
		{
		    data();
		}
		else
		printf("Invalid choice");
		
	}
	while (ch !=5);
}
int main()
{
    	data();
    	return 0;
}
