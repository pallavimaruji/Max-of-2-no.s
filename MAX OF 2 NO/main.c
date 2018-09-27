#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,max;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    printf("The maximum of %d and %d is %d",a,b,max);
    getch();
}
