#include<stdio.h>
int main()
{
	int num,i,j,sayac=0,toplamasal=0;
	printf("Bir sayi giriniz\n");
	scanf("%d",&num);
	while(num!=-1)
	{
		toplamasal=0;
	for(i=2;i<=num;i++)
	{
	sayac=0;
	for(j=2;j<i;j++)
		{
			if(i%j==0)
			sayac++;
		}
		if(sayac==0)
		{
		printf("%d ",i);
		toplamasal++;
	}
	}
		printf("\ntoplamasal:%d\n",toplamasal);
	scanf("%d",&num);
    }

	return 0;
}
