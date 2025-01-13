//to create a program to enable user to search for the country name or the capital name based on the country or capital input by user



#include <stdio.h> 
#include <string.h> 


void intro(); //function prototype 

void countryoption();
void capitaloption();

//declare the country and capital and assign the value to the variable
char* country_name [30]=
	{"1)Canada","\n2)England","\n3)France","\n4)Germany","\n5)India","\n6)Israel","\n7)Italy","\n8)Japan","\n9)Mexico","\n10)Russia","\n11)United States","\n12)Afghanistan","\n13)Malaysia","\n14)New Zealand","\n15)North Korea","\n16)Australia","\n17)Egypt","\n18)hungary","\n19)Morocco","\n20)Myanmar","\n21)Phillippines","\n22)Poland","\n23)Portugal","\n24)Sweeden","\n25)Vietnam","\n26)Turkey","\n27)Ukraine","\n28)Spain","\n29)Saudi Arabia","\n30)China"};
	
char* capital_name [30]=
	{"1) Ottawa","\n2)London","\n3)Paris","\n4)Bonn","\n5)New Delhi","\n6)Jarusalem","\n7)Rome","\n8)Tokyo","\n9)Mexico city","\n10)Moscow","\n11)Washington","\n12)Kabul","\n13)Kuala Lumpur","\n14)Wellington","\n15)Pyongyang","\n16)Canberra","\n17)Cairo","\n18)Budapest","\n19)Rabat","\n20)Nay pyi taw","\n21)Manila","\n22)Warsaw","\n23)Lisbon","\n24)Stockholm","\n25)Hanoi","\n26)Ankara","\n27)Kiev","\n28)Madrid","\n29)Riyadh","\n30)Beijing"};

//declare universal variable 
int i;
int max=30;
int capital;
int country;

int main()
{
	char option[20];
	
	 
	 
	 for(i=0; i<=100; i++) //first loop
	{
		 intro (); //function call
		printf("\n\nChoose one of the following option to continue:\n");
		scanf("%s", &option);
		
		if (strcmp(option,"Country"  )==0 || strcmp(option,"country")==0) //if else statement and comparing the user input with the varible char
		{
			 countryoption();//fucntion call
			
		}
		else if ((strcmp(option,"Capital")==0 || strcmp(option,"capital")==0))
		{
			capitaloption();//function call

		}
		else if ((strcmp(option,"End")==0 || strcmp(option,"end")==0))
		{
			printf("THANK YOU FOR USING THE PROGRAM");
			break;
		}
		else 
		{
			printf("Wrong output, please try again\n\n ");
		}
   	} 
	
	
}

void intro() //function definiton
{
	printf("-------------------------------------\n");
	printf("\nWelcome to the program to search about the country or the capital");
	printf("\n------------------------------------");
	
	printf("\n1)Country\n2)Capital\n3)End");
}

void countryoption() //function definition
{
	printf("\n-----------------------------------");
	printf("\nList of capital\n");
	
	for (i=0; i<max; i++) //for loop
	{
		printf("%s", capital_name[i]);
	}
	printf("\n-----------------------------------------\n");
	printf("\nChoose one of the capital based on the number : ");
	
	scanf("%d", &capital);// getting the capital input from user
	
		switch (capital) //switch case
		{
			case 1:
			{
				printf("The country is Canada\n");
				break;
			}
			case 2:
			{
				printf("The country is England\n");
				break;
			}
			case 3:
			{
				printf("The country is France\n");
				break;
			}
			case 4:
			{
				printf("The country is Germany\n");
				break;
			}
			case 5:
			{
				printf("The country is India\n");
				break;
			}
			case 6:
			{
				printf("The country is Israel\n");
				break;
			}
			case 7:
			{
				printf("The country is Italy\n");
				break;
			}
			case 8:
			{
				printf("The country is Japan\n");
				break;
			}
			case 9:
			{
				printf("The country is Mexico\n");
				break;
			}
			case 10:
			{
				printf("The country is Rusia\n");
				break;
			}
			case 11:
			{
				printf("The country is United States\n");
				break;
			}
			case 12:
			{
				printf("The country is Afgahnistan\n");
				break;
			}
			case 13:
			{
				printf("The country is Malaysia\n");
				break;
			}
			case 14:
			{
				printf("The country is New Zealand\n");
				break;
			}
			case 15:
			{
				printf("The country is North Korea\n");
				break;
			}
			case 16:
			{
				printf("The country is Australia\n");
				break;
			}
			case 17:
			{
				printf("The country is Egypt\n");
				break;
			}
			case 18:
			{
				printf("The country is Hungary\n");
				break;
			}
			case 19:
			{
				printf("The country is Moroco\n");
				break;
			}
			case 20:
			{
				printf("The country is Myamar\n");
				break;
			}
			case 21:
			{
				printf("The country is Philippines\n");
				break;
			}
			case 22:
			{
				printf("The country is Poland\n");
				break;
			}
			case 23:
			{
				printf("The country is Portugal\n");
				break;
			}
			case 24:
			{
				printf("The country is Sweden\n");
				break;
			}
			case 25:
			{
				printf("The country is Vietnam\n");
				break;
			}
			case 26:
			{
				printf("The country is turkey\n");
				break;
			}
			case 27:
			{
				printf("The country is Ukraine\n");
				break;
			}
			case 28:
			{
				printf("The country is Spain\n");
				break;
			}
			case 29:
			{
				printf("The country is Saudi Arabia\n");
				break;
			}
			case 30:
			{
				printf("The country is Beijing\n");
				break;
			}
			default :
			{
				printf("The number that you entered is invalid please try again. \n")	;
				
			}
		
		}
}


void capitaloption() //function definition
{
	printf("\n-----------------------------------");
	printf("\nList of country\n");
	
	for (i=0; i<max; i++) //for loop
	{
		printf("%s", country_name[i]);
	}
	printf("\n-----------------------------------------\n");
	printf("\nChoose one of the country based on the number : ");
	
	scanf("%d", &country); //getting the country input from user
	
		switch (country) //switch case
		{
			case 1:
			{
				printf("\nThe capital of is Ottawa\n");
				break;
			}
			case 2:
			{
				printf("\nThe capital of is London\n");
				break;
			}
			case 3:
			{
				printf("\nThe capital of is Paris\n");
				break;
			}
			case 4:
			{
				printf("\nThe capital of is Bonn\n");
				break;
			}
			case 5:
			{
				printf("\nThe capital of is New Delhi\n");
				break;
			}
			case 6:
			{
				printf("\nThe capital of is Jarusalem\n");
				break;
			}
			case 7:
			{
				printf("\nThe capital of is Rome\n");
				break;
			}
			case 8:
			{
				printf("\nThe capital of is Tokyo\n");
				break;
			}
			case 9:
			{
				printf("\nThe capital of is Mexico City\n");
				break;
			}
			case 10:
			{
				printf("\nThe capital of is Moscow\n");
				break;
			}
			case 11:
			{
				printf("\nThe capital of is Washington\n");
				break;
			}
			case 12:
			{
				printf("\nThe capital of is Kabul\n");
				break;
			}
			case 13:
			{
				printf("\nThe capital of is Kuala Lumpur");
				break;
			}
			case 14:
			{
				printf("\nThe capital of is Wellington\n");
				break;
			}
			case 15:
			{
				printf("\nThe capital of is Pyongyang\n");
				break;
			}
			case 16:
			{
				printf("\nThe capital of is Canberra\n");
				break;
			}
			case 17:
			{
				printf("\nThe capital of is Cairo\n");
				break;
			}
			case 18:
			{
				printf("\nThe capital of is Budapest\n");
				break;
			}
			case 19:
			{
				printf("\nThe capital of is Rabat\n");
				break;
			}
			case 20:
			{
				printf("\nThe capital of is Nay Pyi Taw\n");
				break;
			}
			case 21:
			{
				printf("\nThe capital of is Manila\n");
				break;
			}
			case 22:
			{
				printf("\nThe capital of is Warsaw\n");
				break;
			}
			case 23:
			{
				printf("\nThe capital of is Lisbon\n");
				break;
			}
			case 24:
			{
				printf("\nThe capital of is Stockholm\n");
				break;
			}
			case 25:
			{
				printf("\nThe capital of is Hanoi\n");
				break;
			}
			case 26:
			{
				printf("\nThe capital of is Ankara\n");
				break;
			}
			case 27:
			{
				printf("\nThe capital of is Kiev\n");
				break;
			}
			case 28:
			{
				printf("\nThe capital of is Madrid\n");
				break;
			}
			case 29:
			{
				printf("\nThe capital of is Riyadh\n");
				break;
			}
			case 30:
			{
				printf("\nThe capital of is China");
				break;
			}
			default :
			{
				printf("\n\nThe number that you entered is invalid please try again. ")	;
				
			}
		
		}
}
