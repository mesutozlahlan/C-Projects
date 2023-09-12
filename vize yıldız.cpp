#include<stdio.h>
int main()
{
	int i,j,k,num;
	scanf("%d",&num);
	while(num!=-1)
	{
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num-i;j++)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
			printf("*");
			printf("  ");
		for(k=1;k<=2*(num-i)+1;k++)
			printf("*");
		printf("\n");
	}
	scanf("%d",&num);
	}
return 0;
}

