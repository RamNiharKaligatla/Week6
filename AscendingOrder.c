#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];

	printf("Enter string: ");
	scanf("%s", a);

	int i, j, l = strlen(a), k;
	for (i = 0; a[i] != 0; i++)
	{
		for (j = i; j < l - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}

	return 0;
}