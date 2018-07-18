#include <stdio.h>
void main()
{
    int N,i,count=0;

    printf("Enter a Number: ");
    scanf("%d",&N);


    if(N<=1000)
    {
	

    for(i=2; i<=N/2; ++i)
    {
      
        if(N%i==0)
        {
            count=1;
            break;
        }
    }

    if (count==0)
        printf("yes");
    else
        printf("no");
    }    
   
}
