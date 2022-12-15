#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	printf("TAS KAGIT MAKAS OYUNU\n\n");
	
	srand(time(NULL));
	
	int i = 0, tahmin;
	int kullaniciSkor = 0, bilgisayarSkor = 0;
	
	while(i < 5){
		printf("Lutfen tahmininizi giriniz (1.tas, 2.kagit, 3.makas): \n");
		scanf("%d",&tahmin);
		
		int bilgisayartahmini = (rand()%3) + 1;
		
		if(tahmin == 1){
			
			if(bilgisayartahmini == 3){
				kullaniciSkor++;
				printf("Kazandiniz! :) \n");
			}
				
			else if(bilgisayartahmini == 2){
				bilgisayarSkor++;
				printf("Bilgisayar kazandi :( \n");
			}
				
			else if(bilgisayartahmini == 1)
				printf("Berabere :| \n");
				
		}else if(tahmin == 2){
			
			if(bilgisayartahmini == 3){
				bilgisayarSkor++;
				printf("Bilgisayar kazandi :( \n");
			}
				
			else if(bilgisayartahmini == 1){
				kullaniciSkor++;
				printf("Kazandiniz! :) \n");
			}
				
			else if(bilgisayartahmini == 2)
				printf("Berabere :| \n");
				
		}else if(tahmin == 3){
			
			if(bilgisayartahmini == 1){
				bilgisayarSkor++;
				printf("Bilgisayar kazandi :( \n");
			}
				
			else if(bilgisayartahmini == 2){
				kullaniciSkor++;
				printf("Kazandiniz! :) \n");
			}
				
			else if(bilgisayartahmini == 3)
				printf("Berabere :| \n");
			
		}else{
			printf("Kural disi tahmin girisi!!! :( \n");
		}
		
		i++;
	}
	
	printf("Kullanici %d - %d Bilgisayar", kullaniciSkor, bilgisayarSkor);
	
	return 0;
	
	/*
	TAS KAGIT MAKAS OYUNU

	Lutfen tahmininizi giriniz (1.tas, 2.kagit, 3.makas):
	6
	Kural disi tahmin girisi!!! :(
	Lutfen tahmininizi giriniz (1.tas, 2.kagit, 3.makas):
	1
	Kazandiniz! :)
	Lutfen tahmininizi giriniz (1.tas, 2.kagit, 3.makas):
	2
	Kazandiniz! :)
	Lutfen tahmininizi giriniz (1.tas, 2.kagit, 3.makas):
	3
	Bilgisayar kazandi :(
	Lutfen tahmininizi giriniz (1.tas, 2.kagit, 3.makas):
	2
	Kazandiniz! :)
	Kullanici 3 - 1 Bilgisayar
	*/
	
}
