#include<stdio.h>
#include<math.h>
int prim(int a)
{
	int i;
	for(i=2;i<sqrt(a);i++)
		{
			if(a%i==0)
				return 0;
		}
	return 1;
}
int pare(int n)
{
	if(n%2==0)
		return 1;
	return 0;
}
int main (){
	int n,i,x[10];
	scanf("%d",&n);
	for(i=1; i<=n; i++)
		scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	{
		if(prim(x[i])!=0)
			printf("Numarul %d  este prim\n",x[i]);
		if(pare(x[i]))
			printf("Numarul %d este par\n",x[i]);
		else
			printf("Numarul %d este impar\n",x[i]);
	}
	return 0;
}
