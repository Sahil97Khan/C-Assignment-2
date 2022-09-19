#include<stdio.h>
#include<conio.h>


int main()
{
    double x;
    printf("Enter Any Number in Rupees(INR):-");
    printf("\n");
    scanf("%lf",&x);

    double y;
    y=x/76.23;

    printf("COREESPONDING AMOUNT IN USD IS %lf",y);
    getch();

}
