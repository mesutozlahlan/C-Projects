#include<stdio.h>

void ters_cevir(char a[]) {
	
	if(a[0] == '\0') {
		printf("-");
		return;
	}
	else {
		printf("%c",a[0]);
	}
	
	ters_cevir(&a[1]);
	

	printf("%c",a[0]);
}



int main() {
	
	char ad[11] = "HelloWorld";
	
	ters_cevir(ad);
	
	return 0;
}
