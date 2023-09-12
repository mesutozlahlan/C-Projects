#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	scanf("%d",&a);
	char diz[a];
	int i=0;
	while(i<a)
	{
		diz[a]='K';
		i++;
	}
	i=0;
	int b=1;
	int c=0;
	while(i<a)
	{
		while(c<a)
		{
		if(((c+1)%b)==0)
		{
			if(diz[c]=='A')
			{
			diz[c]='K';
			}
			else
			{
			diz[c]='A';
			}		
		}
		c++;
		}
		c=0;
	i++;
	b++;
	}
	
	i=0;
	while(i<a)
	{
		if(diz[i]=='A')
		{
		printf("%d ",i+1);
		}		
		i++;
	}
	return 0;
}
