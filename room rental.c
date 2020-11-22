#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include"option.h"
#include"D:\room project\intro.h"
#include"terms.h"
#include<string.h>
#include"D:\room project\choice.h"
void fn(void);
void add(void);
void intro(void);


int main()
{  int  x1,x2;
     a9:a14:
    terms();
    printf("\n\n");
    printf("\nIf you are agree Press 1\n\nIf not Press (exit) 2\n");
    scanf("%d",&x1);


    switch(x1)
    {
    case 1:
        system("color EA");
        system("cls");
       intro();
       //add();
       printf("\nTo continue Press 1\n\nTo exit press 2\n\n");
       scanf("%d",&x2);
       if(x2==1)
        system("cls");
       goto a14;
       if(x2==2)
       {  exit(0);}
       break;
    case 2:
        exit(0);
        break;
    default:
        printf("Plz select in the given option\n");
   getche();
        system("cls");
        goto a9;
        break;
    }

return 0;

}



