# include <stdio.h>
void main ()
{

int i, n;
    scanf("%d",&n);
    
  while (n!=0)
  
  {
  
  	n=n/10;
  	i++;
  }
 
 printf("%d",i);
}
