#include<stdio.h>

void main()
{
	int n,x,z,rev=0,rem;
	printf("Enter Number: ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
    	rem=x%10;
    	rev=rev*10+rem;
    	x=x/10;
    	
	}

	printf("%d",rev);
}

