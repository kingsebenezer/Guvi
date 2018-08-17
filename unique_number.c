#include<stdio.h>
int main()
{
   int a[100],i,value,count=0,e=0;
   long int n;
   scanf("%ld",&n);
   if(n>=1&&n<=100000)
   {
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      count=0;
      e=0;
      value=a[i];
      while(e<n)
      {
         if(value==a[e])
         {
           count++;
         }     
           e++;     
      }

      if(count==1)
      { 
         printf("%d ",value); 
      }        
   }
  }
  else
  printf("Invalid Input");
  return 0;
}
