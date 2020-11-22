#define N "(Plz select in the given option)"
#include<conio.h>
#include"D:\room project\choice.h"
void fn(void);
void choice(int ,int);
void add(void)
 {
int x,y,z,z1;

printf("Select The Following Option.....\n\n\n");
q:
printf("\nIN which Kind of Area you want......\n");

printf("\n1) on road side\t2)in colony\n\n3)in market\n");
printf("\n");
scanf("%d",&x);
if(x<=0||x>3)
 {
    fn();
    goto q;
 }
 a2:
printf("\nHow many members will stay.....\n\n");

scanf("%d",&y);
if(y<=0)
{
    printf("\n(Plz Enter At Least One Person)\n");
    getche();
    system("cls");
    goto a2;
}
a3:
printf("\nWhat Do U Want.....\n");

printf("\n1) flat\t 2)simple Room\n");
printf("\n");
scanf("%d",&z);
if(z<=0||z>2)
{
    fn();
    goto a3;
}
a4:
printf("\nRent for......\n1)family\t2)Bachelor\n\n3)Business\\Worker\n\n");

scanf("%d",&z1);
if(z1<=0||z1>3)
{
    fn();
    goto a4;
}
system("cls");
choice(x,z);

 }
void fn(void)
{
     printf("\n%s",N);
getche();
system("cls");

}

/*void choice(int a,int b)
{
    system("cls");
 if(a==1&&b==1)
 {
   printf("There are 123 Flats\n");
   printf("23- 1 B.H.K\n90- 2 B.H.K\\n\n10- 3 B.H.K");

 }
 if(a==1&&b==2)
 {
   printf("There are 223 Rooms\n");
   printf("\n123- Single Rooms\n\n90- Double ROOM\\n\n10- 3 Rooms\n\n");

 }

 if(a==2&&b==1)
 {

 printf("There are 90 Flats\n");
   printf("\n33- 1 B.H.K\n\n17- 2 B.H.K\\n\n40- 3 B.H.K");
 }

if(a==2&&b==2)
 {
   printf("There are 200 Rooms\n");
   printf("\n123- 1 Single Rooms \n\n17- Double ROOM\\n\n60- 3 Rooms\n\n");

 }
if(a==3&&b==1)
{

  printf("There are 100 Flats\n");
   printf("\n23- 1 B.H.K\n\n60- 2 B.H.K\\n\n7 - 3 B.H.K");
}
if(a==3&&b==2)
 {
   printf("There are 400 Rooms\n");
   printf("\n200- 1 Single Rooms\n\n117- Double ROOM\\n\n83- 3 Rooms\n\n");

 }


}
*/
