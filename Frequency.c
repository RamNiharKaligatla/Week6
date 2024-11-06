#include <stdio.h>
int main()
{
	char a[100];
	printf("Enter string: ");
	scanf("%s",a);
	int f[100],i,j;
	for(i=0;a[i]!='\0';i++)
	{
		f[i]=0;
	}
	for(i=0;a[i]!='\0';i++)
	{
		int c=1;
		if(f[i]==1)
			{
				continue;
			}
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
				f[j]=1;
				c++;
			}
		}
		printf("%c count: %d\n",a[i],c);
	}
	return 0;
}
