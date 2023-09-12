#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	
	int i;
	int girdi;
	
	int indexMin=0;int indexMax=0;
	int counter=0;int counterTemp=0;
	for(i=0;i<n;i++){
		scanf("%d",&girdi);
		a[i]=girdi;
	}
	//printf("B Dizisi :  \n");
	for(i=0;i<n-1;i++){//B dizisi oluþuyor
		a[i]=a[i+1]-a[i];
		//printf("%d \n",a[i]);
	}
	for(i=0;i<n-2;i++){
		if(a[i+1]>a[i]){
			counterTemp++;
			if(counterTemp>counter){
				counter=counterTemp;
				indexMax=i+1;	
				//printf("indexMax: %d counter: %d \n",indexMax,counter);	
			}
		}else if(a[i+1]<a[i])
			counterTemp=0;
	}
	for(i=indexMax-(counter);i<=indexMax;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
