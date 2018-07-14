#include<stdio.h>
void main()
{
int num;
printf("Enter a Number:");
scanf("%d",&num);
if (num > 0)
        printf("Positive");
    else if (num < 0)
        printf("Negative");
    else
        printf("Zero");
        
}
