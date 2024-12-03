#include <stdio.h>
#include <string.h>

int main()
{
	char a[100], b[100];
	int i;

	printf("Enter 1st string: ");
	scanf("%s", a);
	printf("Enter 2nd string: ");
	scanf("%s", b);

	int l1 = strlen(a), l2 = strlen(b);
	for (i = 0; i < l2; i++)
	{
		a[l1 + i] = b[i];
	}
	printf("New string is: %s", a);

	return 0;
}
