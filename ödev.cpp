//soru: kullan��dam nir say� al�p sa 10dan k���kse 
//10 ile 20 aras�ndaysa
//20den b�y�kse

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

		printf( "%d, on ila yirmi aras�ndad�r :", sayi);
	}
	else{
			printf("%d,  yirmiden buyuktur: ", sayi);
		
	}
	
	
	
	return 0;
	
	
	
	
	
	
}

