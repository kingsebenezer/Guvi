#include<stdio.h>
void main()
{
int num;
printf("Enter a Number:");
scanf("%d",&num);
if (num <= 0)
        printf("invalid");
    else if (num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
        
}
