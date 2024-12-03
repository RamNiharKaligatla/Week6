#include <stdio.h>

int main()
{
	char a[100];
	int i;

	printf("Enter string: ");
	scanf("%s", a);

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}
	}
	printf("Lowercase string is: %s", a);

	return 0;
}