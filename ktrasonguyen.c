// kiem tra so nguyen 
#include<stdio.h>
#include<math.h>
int main()
{
	float n;
	printf("nhap N = ");
	scanf("%f", &n);
	if(n==(int)n)
	{
		printf("N la mot so nguyen");
	}
	else
	{
		printf("N ko phai la so nguyen");
	}
}
