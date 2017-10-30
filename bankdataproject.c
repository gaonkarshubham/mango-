#include <stdio.h>
char maneger(char x);
char worker(char y);
char costomer(char z);
char main(){
  int type;
  char q;
        printf("please choose from following\n1:maneger\n2:worker\n3:costomer\n");
        scanf("%d",&type);
        switch (type){
              case 1:{
                maneger(q);
              break;
              }
              case 2 :{
                worker(q);
              break;
              }
              case 3 :{

                costomer(q);

              break;
              }

              default:{
              printf("invalid choice \n plz try again\n");
              }

            }
}
      char maneger(char x)
      { int w;
        char a[10],b[10],h[10],i[10],j[10],k[10],l[10],m[10];
        printf("please Enter your ID:");
        scanf("%s",&h);
        printf("enter your name:");
        scanf("%s",&m);
        printf("please Enter your contact no:");
        scanf("%s",&a);
        printf("enter your address:");
        scanf("%s",&i);
        printf("enter your DOB:");
        scanf("%s",&j);
        printf("enter your blood group:");
        scanf("%s",&k);
        printf("enter your gender(for male type 1 and for female type 2)");
        scanf("%d",&w);
          switch (w) {
            case 1:{
              printf("male\n");
              break;
            }
            case 2:{
              printf("female\n");
              break;
            }
          }

        printf("how many years you have experience of maneger job:");
        scanf("%s",&b);


        printf("\nyour ID: %s\n",h);
        printf("your name:  %s\n",m);
        printf("your contact no is: %s\n",a);
        printf("your address: %s\n",i);
        printf("your DOB: %s\n",j);
        printf("your blood group: %s\n",k);
        printf("your gender:");
              if (w==1) {
              printf("male\n");
              }
              else if (w==2) {
              printf("female\n");
              }
              else {
              printf("plese enter valid gender\n");
              }
        printf("you have experience of maneger job %s years\n",b);
      }
      char worker(char y)
      {
        char a[10],b[10],h[10],i[10],j[10],k[10],l[10],m[10];
        printf("please Enter your ID:");
        scanf("%s",&h);
        printf("enter your name:");
        scanf("%s",&m);
        printf("please Enter your contact no:");
        scanf("%s",&a);
        printf("enter your address:");
        scanf("%s",&i);
        printf("enter your DOB:");
        scanf("%s",&j);
        printf("enter your blood group:");
        scanf("%s",&k);
        printf("enter your gender:");
        scanf("%s",&l);
        printf("how many years you work in these bank:");
        scanf("%s",&b);


        printf("\nyour ID: %s\n",h);
        printf("your name:  %s\n",m);
        printf("your contact no is: %s\n",a);
        printf("your address: %s\n",i);
        printf("your DOB: %s\n",j);
        printf("your blood group: %s\n",k);
        printf("your gender:%s\n",l);
        printf("you work in these bank is %s years\n",b);
      }
      char costomer(char z)
      {
          char a[10],b[10],h[10],i[10],j[10],k[10],l[10],m[10];
          printf("enter your account number:");
          scanf("%s",&h);
          printf("enter your name:");
          scanf("%s",&m);
          printf("please Enter your contact no:");
          scanf("%s",&a);
          printf("enter your address:");
          scanf("%s",&i);
          printf("enter your DOB:");
          scanf("%s",&j);
          printf("enter your blood group:");
          scanf("%s",&k);
          printf("enter your gender:");
          scanf("%s",&l);
          printf("are you happy with our service:");
          scanf("%s",&b);


          printf("\nyour ID: %s\n",h);
          printf("your name:  %s\n",m);
          printf("your contact no is: %s\n",a);
          printf("your address: %s\n",i);
          printf("your DOB: %s\n",j);
          printf("your blood group: %s\n",k);
          printf("your gender: %s\n",l);
          printf("you have experience of maneger job %s years\n",b);
      }
