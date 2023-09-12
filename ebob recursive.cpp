#include <stdio.h>
ebob(int x , int y)
{
	int  kalan;
	kalan=x%y;
	x=y;
	y=kalan;
	if(kalan==0)
	return x;
	else
	return ebob(x,y);
}
int main()
{ int num1,num2;
   scanf("%d%d",&num1,&num2);
   printf("%d",ebob(num1,num2));
   return 0;
}
