#include<stdio.h>
int main()
{
	char ch;
	scanf("%ch",&ch);
	if (ch>=65&&ch<=90)
	{
		printf("uppercase character");
	}
	else if(ch>=97&&ch<=122)
	{
		printf("lowercase character");
	}
	else if(ch>=48&&ch<=57)
	{
		printf("digits");
	}
	else 
	{
		printf("special character");
	}
}
