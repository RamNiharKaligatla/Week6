#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int i;
	printf("Enter string: ");
	scanf("%s",a);
	int l=strlen(a);
	if(a[i]==a[l-i-1])
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
	return 0;
}
