/* C program to print the sum of digits upto a single digit*/
#include<stdio.h>
main()
{
	int n,r,sum=0,q=0,p;
	scanf("%d",&n);
	 while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
		while(sum>0)
		{
			p=sum%10;
			q=q+p;
			sum=sum/10;
		}
	printf("%d",q);
	}
