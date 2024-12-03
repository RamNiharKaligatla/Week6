#include <stdio.h>
int main()

{
	char a[100];

	printf("Enter string: ");
	scanf("%s", a);

	int m = a[0] - 'a';
	a[0] = 'A' + m;

	printf("New string is: %s", a);

	return 0;
}