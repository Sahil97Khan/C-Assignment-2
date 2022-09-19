///to make last digit zero
#include<stdio.h>
#include<conio.h>
int main()
{
 int x;
 printf("ENTER ANY NUMBER:-");
 scanf("%d",&x);

 int l;
 l=x%10;
 x=x-l;

printf("REQUIRED NUMBER IS %d",x);
 getch();

}
