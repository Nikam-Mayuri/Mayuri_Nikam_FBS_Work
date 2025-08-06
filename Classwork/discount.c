#include<stdio.h>
void discount();
void main()
{
discount();
}
void discount()
{
	
		float price, Discount1,finalprice;
	char student;
	printf("Please enter the price: ");
	scanf("%f",&price);
	printf("\nAre you a student?(y/n): ");
	scanf("%s",&student);
	
	if(student=='y')
	{
		if(price>500)
		{
			
			Discount1=0.20*price;
		
			
		}
		else if(price<=500)
		{
			Discount1=0.10*price;
			
		}
	}
		else if(price>600)
		{
		
			
			
					Discount1=0.15*price;
			
		

		}
		else
		{
			printf("\nThank you for purchasing.");
		}
	finalprice=price-Discount1;
	printf("Discount applied: Rs.%2f\n",Discount1);
	printf("Final price to pay: Rs.%2f\n",finalprice);
}