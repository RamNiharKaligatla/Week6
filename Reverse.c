#include <stdio.h>

int main()
{
	char a[100], b[100];
	int i, j;

	printf("Enter string: ");
	scanf("%s", a);

	for (j = 0; a[j] != '\0'; j++)
	{
		;
	}

	for (i = 0; i < j; i++)
	{
		b[i] = a[j - i - 1];
	}

	printf("New string is: %s", b);

	return 0;
}