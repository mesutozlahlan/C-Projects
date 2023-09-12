#include<stdio.h>
int x_us(int x,int y)
{
	if(y==0)
		return 1;
	else
		return x*x_us(x,y-1);
}
int main()
{
	int sayi,z,t=0,carp=0,sum=0;
	scanf("%d",&sayi);
	while(sayi>0)
	{
		carp=0;
		z=sayi%10;
		if(z==1)
		carp=z*x_us(2,t);
		if(z==0)
		carp=0;
		sum+=carp;
		sayi=sayi/10;
		t++;
	}
	printf("%d",sum);
	return 0;
}
