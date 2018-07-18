# include <stdio.h>
void main ()
{

int i,n,k,sum=0;
    scanf("%d %d",&n,&k);
 int array[n];
    
  for(i=1;i<=n;i++)
  {
  	array[i-1]=i;
  }
 
 
 /* for(i=0;i<n;i++)
  {
  	printf("%d \t",array[i]);
  }*/
 
 
 if(k<=n)
 {
 
 	for(i=0;i<=k-1;i++)
  {
  	sum=sum+array[i];
  	
  }
  printf("\n%d",sum);
 }
 
 
}
