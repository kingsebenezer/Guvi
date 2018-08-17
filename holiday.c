#include <stdio.h>
int main()
{
    char c;
    int l,u;

    printf("Enter an Day: ");
    scanf("%c",&c);

    l = (c == 's');

    u = (c == 'S');

    if( isalpha(c) )
    {

    
    if (l || u)
        printf("yes");
    else
        printf("no");
    return 0;
    }
   	
    	
    	
    	
    	
}
