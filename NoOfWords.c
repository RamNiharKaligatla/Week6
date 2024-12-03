#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];

	printf("Enter string: ");
	fgets(a, 100, stdin);

	int i, c = 1;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ')
		{
			c++;
		}
	}
	printf("%d", c);

	return 0;
}