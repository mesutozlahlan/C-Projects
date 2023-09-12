#include<stdio.h>
int us(int x,int y)
{
int j;
int sonuc=1;
for(j=1;j<=y;j++)
sonuc=sonuc*x;
return sonuc;	
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	while(a!=-1)
	{
	printf("%d\n",us(a,b));
	scanf("%d%d",&a,&b);
}
	return 0;
}
