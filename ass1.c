/*C program to print pattern*/
#include<stdio.h>
main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");
	}
	for(i=n;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");
	}
}
