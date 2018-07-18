# include <stdio.h>
void main ()
{

int number,i,b,m,n,k,flag=0,c=0;

scanf("%d %d",&number,&k);

n = number;
while (n != 0)
{
 
    n=n/10;
    c++;
}

int numberArray[c];

b = 0;    
m = number;

while (m != 0)
{
    numberArray[b] = m % 10;// pushing indidual digit into array
    m=m/10;
    b++;
}

 for (i = c-1; i >=0; i--)
            {
            if(numberArray[i]==k)
            flag++;
            	
			}
			
  printf("%d",flag);			

}
