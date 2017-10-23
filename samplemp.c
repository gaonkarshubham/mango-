#include <stdio.h>
int main()
{
     int type;
	printf("choose from following \n1:payari:,\n2:hapus:,\n3:raywal:, \n4:totapuri:, \n5:langada:, \n6:ratna:, \n7:nilam:\n");
	scanf("%d",&type);
	
     switch (type)
     {
        case 1:
        	printf("great work................. you choose payari\n");
		printf("you want to buy payari mango?(Y/N)");
		char i;
		scanf("%c",&i);
		if (i=="y"){
		printf("hiiii");
		}
		else {
		printf("byee");
		}




	
        break;
        case 2 :
       		printf("great work................ you choose hapus \n");
        break;
        case 3 :
        	printf("great work............... you choose raywal\n ");
        break;
        case 4:
       		printf("great work............... you choose totapuri\n");
        break;
	case 5:
		printf("great work............... you choose langada\n");
	break;
	case 6:
		printf("great work................you choose ratna\n");
	break;
	case 7:
		printf("great work................you choose nilam\n");
 	break;          






default:
             printf("Default ");
     }
     return 0;
}
