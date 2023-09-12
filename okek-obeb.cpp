#include<stdio.h>
int lcm(int num1,int num2)
{
	int maxvalue;
	maxvalue=(num1>num2) ? num1:num2;
	while(1)
	{
		if ((maxvalue%num1==0)&&(maxvalue%num2==0))
		{
			break;
		}
		++maxvalue;
	}
	return maxvalue;
}
int gcd(int x,int y)
{
	if(x==0)
	{
		return y;
	}
	while(y!=0)
	{
		if(x>y)
		{
			x=x-y;
		}
		else
		{
			y=y-x;
		}
	}
	return x;
}
int main()
{
 int num1,num2;
 scanf("%d%d",&num1,&num2);
 printf("OKEK = %d\nOBEB =%d\n",lcm(num1,num2),gcd(num1,num2));
 return 0;
}

