# include <stdio.h>
void main ()
{

int a,b,c; 

printf("Enter 3 Values");
scanf("%d %d %d",&a,&b,&c);
 // printf( "%d", c) ;
  
  if(a>b && a>c)
  {
  	  printf( "%d", a) ;
  }
  else if(b>c)
  {
  	  printf( "%d", b) ;
  }

  else
  printf( "%d", c) ;

}
