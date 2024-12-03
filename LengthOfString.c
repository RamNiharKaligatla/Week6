#include <stdio.h>

int main()
{
	char a[100];
	int j;

	printf("Enter string: ");
	scanf("%s", a);

	for (j = 0; a[j] != '\0'; j++)
		;

	printf("Length of string is: %d", j);

	return 0;
}