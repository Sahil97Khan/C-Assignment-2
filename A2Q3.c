#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;
    printf("Enter Any Two Number:-");
    printf("\n");
    scanf("%d%d",&x,&y);

    printf("\n Given Number x=%d and y=%d",x,y);
    z=x+y;
    x=z-x;
    y=z-x;

    printf("\n Numbers after swaping x=%d and y=%d",x,y);

    getch();
}
