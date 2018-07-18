#include <stdio.h>
int main()
{
    int p,q,i;
    printf("Enter Two limits: ");
    scanf("%d %d",&p,&q);

    for(i=p+1;i<q;i++)
    {
    	if(i%2==0)
    	printf("%d \t",i);
	}
    
  	
}
