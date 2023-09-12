#include<stdio.h>
int cift(int n)
{
	int toplam=n/2*(n/2+1);
return toplam;
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",cift(x));
	return 0;
}
