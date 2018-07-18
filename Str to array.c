#include <stdio.h>
#include <string.h>

void main() 
{
 int z,i,j;	
 char word[20];
 scanf("%s",word);
 for(i = 0; word[i] != '\0'; ++i);//length
 for(j=0;j<i;j=j+3)
 {
 	printf("%c",word[j]);
 }
 
 
}
