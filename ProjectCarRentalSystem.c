#include<stdio.h>
int calc_four(int km)
{
	int a=km,pr=1;
	if(a<=300)
	{
		pr=300*12+500;
	}
	else
	{
		pr=a*12+500;
	}
	return(pr);
}

int calc_seven(int km)
{
	int a=km,pr=1;
	if(a<=300)
	{
		pr=300*25+1000;
	}
	else
	{
		pr=a*25+1000;
	}
	return(pr);
}

int calc_bill(int pr,int opt4)
{
	char name[30],num[12],dt[15];
	int pas,price=pr,option=opt4;
	system("cls");
	fflush(stdin);
	printf("\nEnter Full Name :");
	scanf("%[^\n]s",name);
	fflush(stdin);
	printf("\nEnter Mobile Number :");
	scanf("%[^\n]s",num);
	fflush(stdin);
	printf("\nEnter Number of Passengers :");
	scanf("%d",&pas);
	fflush(stdin);
	printf("\nEnter Date When Car Needed :");
	scanf("%[^\n]s",dt);
	
	system("cls");
	printf("\n****** FINAL BILL ******");
	printf("\n\nNAME            : %s",name);
	printf("\nPHONE NUMBER    : %s",num);
	printf("\nPASSENGERS      : %d",pas);
	printf("\nBOOKED FOR DATE : %s",dt);
	if(option==1)
	{
		printf("\n\nCAR BOOKED      : Maruti Suzuki Celerio");
		printf("\nCAR PRICE       : %d",price-500);
		printf("\nDRIVER'S PRICE  : 500");
		printf("\n\nFINAL PRICE     : %d",price);
	}
	else if(option==2)
	{
		printf("\n\nCAR BOOKED      : Swift Dzire");
		printf("\nCAR PRICE       : %d",price-500);
		printf("\nDRIVER'S PRICE  : 500");
		printf("\n\nFINAL PRICE     : %d",price);
	}
	else if(option==3)
	{
		printf("\n\nCAR BOOKED      : Honda City");
		printf("\nCAR PRICE       : %d",price-500);
		printf("\nDRIVER'S PRICE  : 500");
		printf("\n\nFINAL PRICE     : %d",price);
	}
	else if(option==4)
	{
		printf("\n\nCAR BOOKED      : Maruti Ertiga");
		printf("\nCAR PRICE       : %d",price-1000);
		printf("\nDRIVER'S PRICE  : 1000");
		printf("\n\nFINAL PRICE     : %d",price);
	}
	else if(option==5)
	{
		printf("\n\nCAR BOOKED      : Tata Safari");
		printf("\nCAR PRICE       : %d",price-1000);
		printf("\nDRIVER'S PRICE  : 1000");
		printf("\n\nFINAL PRICE     : %d",price);
	}
	printf("\n\n************************");
}

main()
{
	int opt,opt2,opt3,opt4,opt5,km,pr;
	start :
	system("cls");
	printf("\n***** WELCOME TO ABC CAR RENTAL OFFICE *****");
	printf("\n\nWe Provide Premium Rental Cars");
	printf("\nEnter :\n1. View Car List \n2. Select Car :");
	scanf("%d",&opt);
	
	if(opt==1)
	{
		option :
		system("cls");
		printf("\nList Of Cars :");
		printf("\n1.Maruti Suzuki Celerio \n2.Swift Dzire \n3.Honda City \n4.Maruti Ertiga \n5.Tata Safari");
		printf("\n\nEnter the Car Number For More Details. 0 to Go Back to Main Menu :");
		scanf("%d",&opt2);
		
		if(opt2==1)
		{
			system("cls");
			printf("\nA Four Seater Maruti Suzuki Celerio");
			printf("\nManual \nHatchback \nColour : Blue \nDesiel Engine \nStorage Capacity : Upto 3 Bags");
			printf("\n\nEnter 1 to View More Car Options.\n0 to Go Back to Main Menu :");
			scanf("%d",&opt3);
			if(opt3==1)
			{
				goto option;
			}
			else 
			{
				goto start;
			}
		}
		else if(opt2==2)
		{
			system("cls");
			printf("\nA Four Seater Swift Dzire");
			printf("\nManual \nSedan \nColour : White \nPetrol Engine \nStorage Capacity : Upto 4 Bags");
			printf("\n\nEnter 1 to View More Car Options.\n0 to Go Back to Main Menu :");
			scanf("%d",&opt3);
			if(opt3==1)
			{
				goto option;
			}
			else 
			{
				goto start;
			}
		}
		else if(opt2==3)
		{
			system("cls");
			printf("\nA Five Seater Honda City");
			printf("\nManual \nSedan \nColour : White \nPetrol Engine \nStorage Capacity : Upto 5 Bags");
			printf("\n\nEnter 1 to View More Car Options.\n0 to Go Back to Main Menu :");
			scanf("%d",&opt3);
			if(opt3==1)
			{
				goto option;
			}
			else 
			{
				goto start;
			}
		}
		else if(opt2==4)
		{
			system("cls");
			printf("\nA Seven Seater Maruti Ertiga");
			printf("\nManual \nWagon \nColour : Grey \nDesiel Engine \nStorage Capacity : Upto 6 Bags");
			printf("\n\nEnter 1 to View More Car Options.\n0 to Go Back to Main Menu :");
			scanf("%d",&opt3);
			if(opt3==1)
			{
				goto option;
			}
			else 
			{
				goto start;
			}
		}
		else if(opt2==5)
		{
			system("cls");
			printf("\nA Seven Seater Tata Safari");
			printf("\nManual \nWagon \nColour : White \nDesiel Engine \nStorage Capacity : Upto 6 Bags");
			printf("\n\nEnter 1 to View More Car Options.\n0 to Go Back to Main Menu :");
			scanf("%d",&opt3);
			if(opt3==1)
			{
				goto option;
			}
			else 
			{
				goto start;
			}
		}
		else if(opt2==0)
		{
			goto start;
		}
		else
		{
			goto option;
		}
	}
	
	else if(opt==2)
	{
		list :
		system("cls");
		printf("\nList Of Cars :");
		printf("\n1.Maruti Suzuki Celerio \n2.Swift Dzire \n3.Honda City \n4.Maruti Ertiga \n5.Tata Safari");
		printf("\n\nEnter Car Number to Check Price and Generate Bill.\nEnter 0 to Exit :");
		scanf("%d",&opt4);
		
		if(opt4==1 || opt4==2 || opt4==3)
		{
			system("cls");
			printf("\nEnter Number of Kilometers :");
			scanf("%d",&km);
			pr=calc_four(km);
			printf("\nCost For %d Kilometers is %d",km,pr);
			printf("\n\nDo You Want To Continue With Billing ?");
			printf("\nEnter 1 to Continue.\n0 to Exit :");
			scanf("%d",&opt5);
			if(opt5==1)
			{
				calc_bill(pr,opt4);
			}
		}
		else if(opt4==4 || opt4==5)
		{
			system("cls");
			printf("\nEnter Number of Kilometers :");
			scanf("%d",&km);
			pr=calc_seven(km);
			printf("\nCost For %d Kilometers is %d",km,pr);	
			printf("\n\nDo You Want To Continue With Billing ?");
			printf("\nEnter 1 to Continue.\n0 to Exit :");
			scanf("%d",&opt5);
			if(opt5==1)
			{
				calc_bill(pr,opt4);
			}
		}
		else
		{
			goto list;
		}
	}
}
