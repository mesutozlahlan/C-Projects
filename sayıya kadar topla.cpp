#include<stdio.h>
int topla(int x)
{
	if(x==1)
	return 1;
	return x+ topla(x-1);
}
int main()
{
	int sayi;
	scanf("%d",&sayi);
	int sonuc =topla(sayi);
	printf("sonuc=%d\n",sonuc);
	return 0;
}
