#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	scanf("%d",&x);
	char Q[x];
	int j=0;
	while(j<x)
	{
		Q[x]='T';
		j++;
	}
	j=0;
	int p=1;
	int o=0;
	while(j<x)
	{
		while(o<x)
		{
		if(((o+1)%p)==0)
		{
			if(Q[o]=='W')
			{
			Q[o]='T';
			}
			else
			{
			Q[o]='W';
			}		
		}
		o++;
		}
		o=0;
	j++;
	p++;
	}
	
	j=0;
	while(j<x)
	{
		if(Q[j]=='W')
		{
		printf("%d ",j+1);
		}		
		j++;
	}
	return 0;
}
