// tim uoc nguyen to lon nhat
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, j, i, s, k;
	int n;
	printf("N = ");
	scanf("%d", &n);
	for(i=2; i<n; i++)
	{
		if(n%i==0)
		{
			if(xyz(i)==1)
			s=i;
			
		}
	}
	if(s==0) printf("....");
	else printf("so do la: %d", s);
}
int xyz(int b)
{
	int j;
	int k=1;
	for(j=2; j<b; j++)
	{
		if(b%j==0)
		{
			k=0;
		}
	}
	return k;
}

