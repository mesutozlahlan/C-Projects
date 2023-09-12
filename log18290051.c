#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	scanf("%d",&x);
	int j=2;
	int k=0;
	while(j<=x){
		k++;
		j*=2;
	}
	printf("%d",k);
	
	return 0;
}
