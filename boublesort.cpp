#include<stdio.h>
int main()
{
	int dizi[10]={1,-3,4,-7,-20,51,-13,8,9,-10};
	int i,temp,max=0;
	for(i=0;i<9;i++)
	{
		if(max<dizi[i])
		max=dizi[i];
		
	}
	printf("%d\n",max);
	for(i=0;i<9;)
	{
	
		if(dizi[i]<dizi[i+1])
		{
		i++;}
		else 
		{
			temp=dizi[i+1];
			dizi[i+1]=dizi[i];
			dizi[i]=temp;
			i=0;
		}
		
		
	}
	for(i=0;i<10;i++)
	printf("%d ",dizi[i]);
	return 0;
}
