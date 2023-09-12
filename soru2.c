#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	int b[n][n+1];
	
	int girdi;
	
	int i;
	int iTemp;
	int value=0;
	
	int j=0;
	
	int donguSayisi=0;
	
	a[0]=100;
	
	for(i=1;i<n+1;i++){ // o(n)
		scanf("%d",&girdi);
		a[i]=girdi;
	}
	
	//ilk atamalar
	i=1;// a da gezinmek için ama geçiçi deðil kalýcý
	iTemp=i;//a da gezinmek döngüleri test etmek için
	j=0;//deðer yazdýrmak için.
	value=a[i];
	while((!value<1 || !value>n+1)){ // worst case yani en kötü durumda bile o(n) oluyor.
			if(value==i){
				//printf("Dongu// \n");
				b[i][j]=iTemp;
				b[i][n]=1;//oluþturduðumuz matriste elemanlarýn bastýrýlmasý gerektiðini belli eden bir iþaret.
				donguSayisi++;
				i++;
				iTemp=i;
				j=0;
				value=a[i];
			}
			if(a[i]==i){
				//printf("Dongu// \n");
				b[i][j]=iTemp;
				b[i][n]=1;//oluþturduðumuz matriste elemanlarýn bastýrýlmasý gerektiðini belli eden bir iþaret.
				donguSayisi++;
				break;
			}
			b[i][j]=iTemp;
			iTemp=value;
			//printf("iTemp: %d ",iTemp);
			value=a[iTemp];
			//printf("value : %d ",value);
			j++;
		}
	
	
	//printf("Dongu sayisi: %d\n",donguSayisi);
	
	for(i=1;i<n;i++){ // önemli!! o(n^2) fakat döngüleri bastýrmak için kullanacaðýmýz iþlem zaman hesabýna dahil edilmeyecek denildi. 
		if(b[i][n]==1){
			for(j=0;j<n;j++){
				if(b[i][j]>0 && b[i][j]<=n)
					printf("%d ",b[i][j]);
			}
		printf("\n");
		}
	}
	
	return 0;
}

// a[1]=3 a[3]=7 a[7]=1
// a[2]=5 a[5]=6 a[6]=2
//a[4]=4    
// 3,5,7,4,6,2,1
