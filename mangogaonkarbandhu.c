#include<stdio.h>

int main() {

	printf("\n\n\n\t\t\t\t\tGAONKAR BANDHU\n\n");
	 printf("\n\n\t\t\t ***********************************************");
         printf("\n\t\t\t*         WELCOME TO THE MANGO SHOP             *");
         printf("\n\t\t\t ***********************************************\n\n\n");
	char a[20];
	char b[20];
	char c[20];
	char d[20];
	char choice;
	int number;


	printf("Enter your full name :");
	scanf ("%s", &a);
	printf("Enter your contact no :");
	scanf ("%s",&d);
	printf("Enter your email ID :");
	scanf ("%s",&b);
	printf("Enter your Address :");
	scanf("%s",&c);

	printf("\nyou name is:%s",a);
	printf("\nyou Contact Number is:%s",d);
	printf("\nyour email ID is:%s",b);
	printf("\nyour Address is:%s\n\n\n\n",c);
     int type;
	printf("choose from following \n1:payari:,\n2:hapus:,\n3:raywal:, \n4:totapuri:, \n5:langada:, \n6:ratna:, \n7:nilam:\n");
	scanf("%d",&type);

     switch (type)     {
        case 1:
										printf("you are interasted to buy payari mango");
								    printf("\nyou are sure to buy these mango (y/n):");
								    scanf(" %c*%c", &choice);
								    choice = tolower(choice);
								     if(choice == 'y'){
								        printf("\nyou choose yes\n");
										    printf("which quality you want to buy\n1.A1\n2.A2\n3.A3\n");
												int number;
												scanf("%d",&number);
												switch (number){
														  case 1:{
															  printf("you have to pay 270 rs for each box of one dozen\n" );
															}
															break;
													    case 2:{
															  printf("you have to pay 240 rs for each box of one dozen\n");
															}
															break;
														  case 3:{
																printf("you have to pay 220 rs for each box of one dozen\n");
															}
															break;
														 }
													 }
										else if(choice == 'n')
										    printf("\nyou chose no");
												else
												printf("please select right choice");

        break;
        case 2 :
										printf("you are interasted to buy hapus mango");
								    printf("\nyou are sure to buy these mango (y/n):");
								    scanf(" %c*%c", &choice);
								    choice = tolower(choice);
								     if(choice == 'y'){
								        printf("\nyou choose yes\n");
										    printf("which quality you want to buy\n1.A1\n2.A2\n3.A3\n");
												int number;
												scanf("%d",&number);
												switch (number){
														  case 1:{
															  printf("you have to pay 270 rs for each box of one dozen\n" );
															}
															break;
													    case 2:{
															  printf("you have to pay 240 rs for each box of one dozen\n");
															}
															break;
														  case 3:{
																printf("you have to pay 220 rs for each box of one dozen\n");
															}
															break;
														 }
													 }
										else if(choice == 'n')
										    printf("\nyou chose no");
												else
												printf("please select right choice");

        break;
        case 3 :
										printf("you are interasted to buy raywal mango");
										printf("\nyou are sure to buy these mango (y/n):");
										scanf(" %c*%c", &choice);
										choice = tolower(choice);
										 if(choice == 'y'){
												printf("\nyou choose yes\n");
												printf("which quality you want to buy\n1.A1\n2.A2\n3.A3\n");
												int number;
												scanf("%d",&number);
												switch (number){
															case 1:{
																printf("you have to pay 270 rs for each box of one dozen\n" );
															}
															break;
															case 2:{
																printf("you have to pay 240 rs for each box of one dozen\n");
															}
															break;
															case 3:{
																printf("you have to pay 220 rs for each box of one dozen\n");
															}
															break;
														 }
													 }
										else if(choice == 'n')
												printf("\nyou chose no");
												else
												printf("please select right choice");

        break;
        case 4:
										printf("you are interasted to buy totapuri mango");
                    printf("\nyou are sure to buy these mango (y/n):");
								    scanf(" %c*%c", &choice);
								    choice = tolower(choice);
								     if(choice == 'y'){
								        printf("\nyou choose yes\n");
										    printf("which quality you want to buy\n1.A1\n2.A2\n3.A3\n");
												int number;
												scanf("%d",&number);
												switch (number){
														  case 1:{
															  printf("you have to pay 270 rs for each box of one dozen\n" );
															}
															break;
													    case 2:{
															  printf("you have to pay 240 rs for each box of one dozen\n");
															}
															break;
														  case 3:{
																printf("you have to pay 220 rs for each box of one dozen\n");
															}
															break;
														 }
													 }
										else if(choice == 'n')
										    printf("\nyou chose no");
												else
												printf("please select right choice");

 				break;
				case 5:
										printf("you are interasted to buy langada mango");
										printf("\nyou are sure to buy these mango (y/n):");
										scanf(" %c*%c", &choice);
										choice = tolower(choice);
										 if(choice == 'y'){
												printf("\nyou choose yes\n");
												printf("which quality you want to buy\n1.A1\n2.A2\n3.A3\n");
												int number;
												scanf("%d",&number);
												switch (number){
															case 1:{
																printf("you have to pay 270 rs for each box of one dozen\n" );
															}
															break;
															case 2:{
																printf("you have to pay 240 rs for each box of one dozen\n");
															}
															break;
															case 3:{
																printf("you have to pay 220 rs for each box of one dozen\n");
															}
															break;
														 }
													 }
										else if(choice == 'n')
												printf("\nyou chose no");
												else
												printf("please select right choice");
						break;

				case 6:
	 									printf("you are interasted to buy ratna mango");
										printf("\nyou are sure to buy these mango (y/n):");
										scanf(" %c*%c", &choice);
										choice = tolower(choice);
										 if(choice == 'y'){
												printf("\nyou choose yes\n");
												printf("which quality you want to buy\n1.A1\n2.A2\n3.A3\n");
												int number;
												scanf("%d",&number);
												switch (number){
															case 1:{
																printf("you have to pay 270 rs for each box of one dozen\n");
															}
															break;
															case 2:{
																printf("you have to pay 240 rs for each box of one dozen\n");
															}
															break;
															case 3:{
																printf("you have to pay 220 rs for each box of one dozen\n");
															}
															break;
														 }
													 }
										else if(choice == 'n')
												printf("\nyou chose no");
												else
												printf("please select right choice");
							break;

											case 7:
																	printf("you are interasted to buy nilam mango");
															  	printf("\nyou are sure to buy these mango (y/n):");
																	scanf(" %c*%c", &choice);
																	choice = tolower(choice);
																	 if(choice == 'y'){
																			printf("\nyou choose yes\n");
																			printf("which quality you want to buy\n1.A1\n2.A2\n3.A3\n");
																			int number;
																			scanf("%d",&number);
																			switch (number){
																						case 1:{
																							printf("you have to pay 270 rs for each box of one dozen\n");
																						}
																						break;
																						case 2:{
																							printf("you have to pay 240 rs for each box of one dozen\n");
																						}
																						break;
																						case 3:{
																							printf("you have to pay 220 rs for each box of one dozen\n");
																						}
																						break;
																					 }
																				 }
																	else if(choice == 'n')
																			printf("\nyou chose no");
																			else
																			printf("please select right choice");
														break;

				default:
             printf("you not choose between yes or no .......sorry &\n");
     }
		 printf("\t\t\t\t\t  thank you \n\t\t\t\t\t  visit again \n");
		getchar();
     return 0;
}
