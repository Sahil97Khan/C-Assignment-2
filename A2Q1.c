#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter Any Number:-");
    printf("\n");
    scanf("%d",&x);
    int y = x%10;
    printf("Unit Digit is %d",y);
    getch();
}
