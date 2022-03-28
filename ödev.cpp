//soru: kullanýýdam nir sayý alýp sa 10dan küçükse 
//10 ile 20 arasýndaysa
//20den büyükse

#include <stdio.h>
int main(){
	
    int sayi;
    printf("Bir sayi giriniz: ");
     scanf("%d",&sayi);
	
	
	
	
	
	if(sayi<10){
		printf("%d, ondan kucuktur.", sayi);
	}
	else if(sayi>=10 && sayi<20 )
	{

		printf( "%d, on ila yirmi arasýndadýr :", sayi);
	}
	else{
			printf("%d,  yirmiden buyuktur: ", sayi);
		
	}
	
	
	
	return 0;
	
	
	
	
	
	
}

