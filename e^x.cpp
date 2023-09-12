#include<stdio.h>
int us(int x,int y)
{
int sonuc=1;
int i;
for(i=1;i<=y;i++){
	
sonuc=sonuc*x;}
return sonuc;
}
int faktoriyel(int f)
{
	int sonuc=1;
	for(;f>0;f--){
	sonuc=sonuc*f;}
	return sonuc;
}
double toplam(int x,int y)
{
	double n,total=1.0;
	for(n=1;n<y;n++){
	total+=((double)us(x,n)/(double)faktoriyel(n));}
	return total;
}
int main()
{
int y;
int t;
scanf("%d%d",&y,&t);
while(y!=-1)
{
printf("%lf\n",toplam(y,t));
scanf("%d%d",&y,&t);
}
return 0;
}
