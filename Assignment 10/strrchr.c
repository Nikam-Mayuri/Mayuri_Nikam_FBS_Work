#include<stdio.h>
#include<string.h>
void main()
{
	char text[]="Hello world";
	char *ptr=strrchr(text,'o');
	if(ptr!=NULL)
	{
		printf("Last 'o' found at position: %ld\n",ptr-text);
	}
	else
	{
		printf("'o' not found.\n");
	}
}