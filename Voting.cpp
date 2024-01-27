#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>

#define candidate_count

#define candidate1 "ARVIND KEJRIWAL"
#define candidate2 "CAPT.AMRINDER SINGH"
#define candidate3 "HARPAL JUNEJA"
#define candidate4 "NAVJOT SINGH SIDHU"

int votescount1=0, votescount2=0, votescount3=0, votescount4=0, spoiledvotes=0;

void castvote()
{
	system("cls");
	int choice;
	printf("\n\n##############################################");
	printf("\n\tVOTING SYSTEM");
	printf("\n################################################");
	printf("\n\n************Please choose your Candidate*************\n\n");
	printf("\n1. %s",candidate1);
	printf("\n2. %s",candidate2);
	printf("\n3. %s",candidate3);
	printf("\n4. %s",candidate4);
	printf("\n5. %s","NONE OF THESE");

	printf("\nINPUT YOUR CHOICE:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			votescount1++; break;
		case 2:
			votescount2++; break;
		case 3:
			votescount3++; break;
		case 4:
			votescount4++; break;
		case 5:
			spoiledvotes++; break;
		default:
			printf("\n\nERROR!WRONG CHOICE!!PLEASE TRY AGAIN!!");

			getchar();
	}
	printf("\n\n***********THANKS FOR VOTING********************");
	getch();
}
void votescount()
{
	system("cls");
	printf("\n\n################################");
	printf("\n\tVOTING STATISTICS");
	printf("\n\n %s - %d",candidate1,votescount1);
	printf("\n %s - %d",candidate2,votescount2);
	printf("\n %s - %d",candidate3,votescount3);
	printf("\n %s - %d",candidate4,votescount4);
	printf("\n %s - %d","Spoiled Votes",spoiledvotes);
	getch();
}

void leadingcandidate()
{
	system("cls");
	printf("\n\n##############################################");
	printf("\n\tLEADING CANDIDATE");
	printf("\n################################################");
	if(votescount1>votescount2 && votescount1>votescount3 && votescount1>votescount4)
		printf("\n\n\t\t[%s]",candidate1);
	else if(votescount2>votescount3 && votescount2>votescount4 && votescount2>votescount1)
		printf("\n\n\t\t[%s]",candidate2);
	else if(votescount3>votescount4 && votescount3>votescount2 && votescount3>votescount1)
		printf("\n\n\t\t[%s]",candidate3);
	else if(votescount4>votescount1 && votescount4>votescount2 && votescount4>votescount3)
		printf("\n\n\t\t[%s]",candidate4);
	else
	{
		printf("\n\n\t\t############WARNING!!!NO-WIN SITUATION##############");
	}
	getch();
}
int main()
{
	int i;
	int choice;
	

	do
	{
		system("cls");
		printf("\n\n#####################################");
		printf("\nWELCOME TO ELECTION/VOTING 2022");
		printf("\n#######################################");
		printf("\n\n1.Cast the Vote");
		printf("\n2.Find Vote Count");
		printf("\n3.Find Leading Candidate");
		printf("\n4.Exit");

		printf("\n\nPlease Enter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				castvote(); break;
			case 2:
				votescount(); break;
			case 3:
				leadingcandidate(); break;
			case 4:
				break;
			default:
				printf("\n\nERROR!! Invalid Choice");
		}
	}while(choice!=4);
	getchar();
	return 0;
}
