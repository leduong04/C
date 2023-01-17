//Tinh tong cua boi so cua 3 hoac 5 nho hon N
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, s, j, m, k;
	
	printf("Nhap so N: ");
	scanf("%d", &n);
	tongboi(n,i,s);
}
int tongboi( int n, int i, int s)
{
	s=0;
	for(i=0; i<n; i++)
	{
		if(i%3==0||i%5==0)
		{
			s=s+i;
		}
	}
	printf("Tong cua cac boi so cua 3 hoac 5 la %d", s);
}
