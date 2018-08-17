#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i,l,c=0;
    
    
    scanf("%s",s);
    l=strlen(s);
    for(i=0;s[i]!='\0';i++)
    {
    if(s[i]>='0' && s[i]<='9')
    {
	c++;  
    }
    }
    
    
	if(l==c)
	{
    	
    	printf("yes");
    }
    else
    {
    	printf("no");
    }   
    

}
    
