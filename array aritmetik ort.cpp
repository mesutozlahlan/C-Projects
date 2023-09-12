#include<stdio.h>
int main()
{
	float toplam=0.0;
	float sayilar[5];
	int i;
	for(i=0;i<=4;i++)
	{
		printf("Bir sayi giriniz:");
		scanf("%f",&sayilar[i]);
		
		toplam+=sayilar[i];
	}
	printf("%.2f",toplam/5);
	return 0;
}
