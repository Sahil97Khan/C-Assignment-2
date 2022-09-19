
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a,b;
    printf("Enter Any 3-Digit Number:-");
    printf("\n");
    scanf("%d",&x);

   a=x%10;
   x=x/10;

   b=x%10;
   x=x/10;

   int q=a+b+x;

    printf("\nThe sum of digits is %d",q);

    getch();
}
