#include <stdio.h>
#include <math.h>
int prim(int a,int n)
{
	int i;

	for(i=2;i<sqrt(n);i++)
	{
		if(a%i==0)
			return 1;
	}
	return 0;
}

int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",a[i]);
	for(i=0;i<n;i++)
		if(prim(a[i],n)==1)
			printf("%d",a[i]);

}
