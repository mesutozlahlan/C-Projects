#include<stdio.h>
int faktoriyel(int f)
{
	int sonuc=1;
	for(;f>0;f--){
	sonuc=sonuc*f;}
	return sonuc;
}
int main()
{
int x;
scanf("%d",&x);
while(x!=-1)
{
printf("%d\n",faktoriyel(x));
scanf("%d",&x);
}
return 0;
}
