#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	float a;
	float b;
	int c, i, j, m, n, k;
	int dem=0;
	char d[1000];
	printf("A = ");
	scanf("%f", &a);
	b=1/a;
	printf("1/%g=%g\n", a,b);


	c=b*1000000000; //the result time 1000000000
	if(c%1000==0)  //if c is divisible by 1000 it means decimal s short
	{
		return 0;
	}
	else
	{
	
	itoa(c,d,10); //convert c from type int to type char assigned to d
	
	for(i=4; i<=strlen(d); i++) //look for numbers that are the same as the 3rd number from the 4th number
	{
		if(d[3]==d[i])
		{
			dem++;
		}
	}
	if(dem>2)
	printf("gia tri la dang vo han tuan hoan");
	else printf("%g\n", b);
	
	
	
}
}
