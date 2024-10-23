#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	int i;
	printf("Enter 1st string: ");
	scanf("%s",a);
	printf("Enter 2nd string: ");
	scanf("%s",b);
	int l1=strlen(a),l2=strlen(b);
	for(i=l1;i<l1+l2;i++)
	{
		a[i]=b[i-l1];
	}
	printf("New string is: %s",b);
	return 0;
}
