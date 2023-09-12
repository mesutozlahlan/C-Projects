#include <stdio.h>
int main(){
	char a[5][3];
	char temp[3];
	char cache;
	int i=0,j,k,h;
	for(i=0;i<5;i++){
		scanf("%c%c%c%c",&a[i][0],&a[i][1],&a[i][2],&cache);	
	}
	for(j=4;j>=0;j--){
		int n=0;
		for(k=j;k>0;k--){
			if(a[j][n]>a[j-k][n]){
				for(h=0;h<3;h++){
				temp[h]=a[j][h];
				a[j][h]=a[j-k][h];
				a[j-k][h]=temp[h];
				}				
			}
		}
	}
	for(j=4;j>=0;j--){
		int n=0;
		for(k=j;k>0;k--){
			if(a[j][n]==a[j-k][n]&&a[j][n+1]>a[j-k][n+1]){
				for(h=0;h<3;h++){
				temp[h]=a[j][h];
				a[j][h]=a[j-k][h];
				a[j-k][h]=temp[h];
				}				
			}
		}
	}
for(j=4;j>=0;j--){
		int n=0;
		for(k=j;k>0;k--){
			if(a[j][n]==a[j-k][n]&&a[j][n+1]==a[j-k][n+1]&&a[j][n+2]>a[j-k][n+2]){
				for(h=0;h<3;h++){
				temp[h]=a[j][h];
				a[j][h]=a[j-k][h];
				a[j-k][h]=temp[h];
				}				
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%c%c%c\n",a[i][0],a[i][1],a[i][2]);		
	}
	return 0;
}
