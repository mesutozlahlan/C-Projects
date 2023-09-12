#include <stdio.h> 
  #include <stdlib.h> 
   
  int main() 
  { 
      int sayi,bs=1,i,sayi2,yediliBas=0; 
      printf("Bir sayi girin: "); 
      scanf("%d", &sayi); 
   
      sayi2=sayi; 
      do{ sayi/= 10; 
            bs++; 
        } while (sayi>=10); 
   
      for(i=1;i<=bs;i++) 
      { 
          if(sayi2%10==7) 
          yediliBas++; 
   
          sayi2/= 10; 
      } 
      printf("Girilen sayinin %d tane basamagi 7'dir. ", yediliBas); 
   
      return 0 ; 
  } 
  
