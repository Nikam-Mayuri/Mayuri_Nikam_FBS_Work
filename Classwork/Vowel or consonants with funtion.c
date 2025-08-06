#include<stdio.h>
void VC();                        //function declaration
void main()
{
	

	VC();                   //function call
}
void VC()                          //Function Definition
{
	char c;
		printf("Enter a character:");
	scanf("%c",&c);
	if(c=='a'||c=='i'||c=='e'||c=='u'||c=='o'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}