#include<stdio.h>
main()
{
	//1. Display the menu
	printf("pick an item : \n1. Pizza, Rs 239\n2. Burger, Rs 129\n3. Pasta, Rs 179\n4. French Fries, Rs 99\n5. Sandwich, Rs 149");
	//2. Read their choice
	int choice=0;
	scanf("%d",&choice);
	//3. Display based on their choice
	
	switch(choice)
	{
		case 1 :
			printf("You picked Pizza, Rs 239.");
			break;
		case 2 :
			printf("You picked Burger, Rs 129.");
			break;
		case 3 :
			printf("You picked Pasta, Rs 179.");
			break;
		case 4: 
		    printf("You picked French Fries, Rs 99.");
		    break;
		case 5:
			printf("You picked Sandwich, Rs 149.");
			break;
		default : printf("Invalid choice.") ;
	}
}
