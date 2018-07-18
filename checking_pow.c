#include <stdio.h>
#include <math.h>
 
void main()
{

   int n,r,z;
   printf("Enter a Number");
   scanf("%d",&n);
   z=sqrt(n);
   r=z*z;
   if(r==n)
   printf("yes");
   else
   printf("no");

   
}
