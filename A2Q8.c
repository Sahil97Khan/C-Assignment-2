
#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    printf("ENTER ANY NUMBER");
    scanf("%d",&x);

    int y=x%2;

  if(y==0)
  {
      printf("\nIt's an Even Number");
  }
  else
    printf("\nIt's an Odd Number");
}
