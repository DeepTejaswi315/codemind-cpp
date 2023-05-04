#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,i,j;
	scanf("%d%d",&a,&b);
	int cnt=0;
	for(i=a;i<=b;i++)
	{
		int is_prime=1;
		int sq=sqrt(i);
		for(j=2;j<=sq;j++)
		{
			if(i%j==0)
			{
				is_prime=0;
				break;
			}
		}
		if(i!=1&&is_prime==1)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
}