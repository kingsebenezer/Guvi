#include<stdio.h>
#include<string.h>
void main()
{
    char word[100];
    int i,l;
    
    scanf("%s",word);
    l=strlen(word);
    for(i=l-1;word[i]!='\0';i--)
    {
        if(word[i]!='a'&&word[i]!='e'&&word[i]!='i'&&word[i]!='o'&&word[i]!='u'&&word[i]!='A'&&word[i]!='E'&&word[i]!='I'&&word[i]!='O'&&word[i]!='U')
        {
        printf("%c",word[i]);
        }
        
        
    }
    
}
