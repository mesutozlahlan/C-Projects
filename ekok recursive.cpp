#include<stdio.h>
int t,z;
ekok(int x,int y)
{
	if(x>y){y+=t;}
	else{x+=z;}
	if(x==y)
		return x;
		return ekok(x,y);
			
}
int main(){
scanf("%d%d",&z,&t);
printf("%d\n",ekok(z,t));
return 0;
}
