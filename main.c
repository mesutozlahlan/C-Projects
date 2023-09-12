#include <stdio.h>
#include <stdlib.h>

int result=1;
int func(int a,int b){
	if(a%2==0 && b%2==0)
	{   
		printf(" a ");
		result=result*2;
		a=a/2;
		b=b/2;
		return func(a,b);
	}
	else if(a%2==0 && b%2!=0)
	{	
		printf(" b ");
		a=a/2;
		return func(a,b);
	}
	else if(b==0)
	{	
		printf(" c ");
		result=result*a;
		
	}
	else if(a>=b)
	{	
		printf(" d ");	
		int q=a;
		a=b;
		b=q-b;
		return func(a,b);		
	}
	else{
		printf(" e ");
		int q1;
		q1=a;
		a=b;
		b=q1;
		return func(a,b);
	}
}

int main() {
			
	int k;
	int l;
	scanf("%d%d",&k,&l);
	func(k,l);
	printf(" %d",result);
	
	

	return 0;
}
