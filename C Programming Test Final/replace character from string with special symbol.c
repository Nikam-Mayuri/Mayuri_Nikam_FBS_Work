#include<stdio.h>
#include<string.h>
void main()
{
	char str[30];
	char ch,symbol;
	int i;
	printf("\nEnter a string: ");
    scanf("%s",str);
    printf("\nEnter character to replace: ");
    scanf(" %c", &ch);
    printf("\nEnter special symbol: ");
    scanf(" %c", &symbol);
    for(i = 0;str[i]!='\0';i++) 
	{
        if(str[i]==ch) 
		{
            str[i]=symbol;
        }
    }
    printf("\nUpdated string: %s\n", str);
}