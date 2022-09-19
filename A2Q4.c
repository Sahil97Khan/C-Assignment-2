#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter Any Two Number:-");
    printf("\n");
    scanf("%d%d",&x,&y);

    printf("\n Given Number x=%d and y=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;

    printf("\n Numbers after swap x=%d and y=%d",x,y);

    getch();
}
