#include<stdio.h>
int cift(int n)
{
	int i,toplam=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		toplam+=i;
		
	}

	return toplam;
}
int main()
{
int x;
scanf("%d",&x);
printf("%d",cift(x));
return 0;
}
