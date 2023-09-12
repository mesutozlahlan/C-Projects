#include<stdio.h>
int main()
{
	int dizi[10];
	int i;
	for(i=0;i<10;i++)
	{
		dizi[i]=i+1;
		printf("%d ",dizi[i]);
		
	}
	printf("\n");
	int a[10];
	int j;
	for(j=0,i=9;j<10;j++,i--)
	{
		a[j]=dizi[i];
		printf("%d ",a[j]);
	}
		
	
	return 0;
}
