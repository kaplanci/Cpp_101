#include <stdio.h>
int main(){
	
   int sayi;
   int toplam = 0;
 
   
   for( int  i = 1; i<=5; i++)
   {

   	printf("%d. sayiyi giriniz \n", i);
   	scanf("%d",&sayi);
   	toplam=toplam + sayi;
  
   	
   }
   printf("Toplam:%d\n",toplam);
   	
   	
   	

 
	
	return 0;
}
