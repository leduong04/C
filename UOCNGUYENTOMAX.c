// tim uoc nguyen to lon nhat

#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, m, i, n, j;
	printf("Nhap N: ");
	scanf("%d", &n);
	for(i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			if(nguyento(i)==1)
			c=i;
		}
	}
	printf("thua so nguyen to lon nhat cua N la: %d", c);
}
int nguyento(int i)
{
 int m=1;
 int j;
	for(j=2; j<i; j++)
	{
		if(i%j==0) m=0;
	}
	return m;
}


