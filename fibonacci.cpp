#include<stdio.h>
int fibonacci(int j)
{
	int i,a,b,c;
	a=0;
	b=1;
	for(i=1;i<j;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}
int main()
{
	int sayi;
	scanf("%d",&sayi);
	printf("%d",fibonacci(sayi));
	return 0;
}
