#include <stdio.h>
int main()
{
    int N,Q,i;
    printf("Enter Two limits: ");
    scanf("%d %d",&N,&Q);
   
   if(N<=100000 && Q<=100000)
   {
   for(i=N+1;i<Q;i++)
    {
    	if(i%2!=0)
    	printf("%d \t",i);
	}
    }
    
  	
}
