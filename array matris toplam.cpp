#include<stdio.h>
int main()
{
	int matris[3][5];
	int i,j;
	int toplam=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&matris[i][j]);
		}
	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	for(j=0;j<5;j++)
	{
		for(i=0;i<3;i++)
		{
			toplam+=matris[i][j];
		}
		printf("%d ",toplam);
		toplam=0;
	}	
	return 0;
}
