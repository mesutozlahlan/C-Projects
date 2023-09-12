#include <stdio.h>
#include <stdlib.h>



int main() {
	int a;
	scanf("%d",&a);
	int i=2;
	int b=0;
	while(i<=a){
		b++;
		i*=2;
	}
	printf("%d",b);
	
	return 0;
}
