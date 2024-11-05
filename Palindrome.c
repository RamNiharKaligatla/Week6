#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int i;
	printf("Enter string: ");
	scanf("%s",a);
	int l=strlen(a),c=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[l-i-1])
		{
			c++;
		}
		else
		{
			printf("It is not a palindrome");
			break;
		}
	}
	if(c==l)
	{
		printf("It is a palindrome");
	}
	return 0;
}
