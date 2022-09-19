
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter Any Number:-");
    printf("\n");
    scanf("%d",&x);

   printf("\nEnter a Number to append as Last Digit");
   scanf("%d",&y);

    x=x*10+y;
    printf("\nRequired Number is %d",x);
    getch();
}
