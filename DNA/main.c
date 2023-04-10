#include <stdio.h>
#include <stdlib.h>

char buyukHarfeCevirme(int a){
	a=a-32;
	return (char)a;
}


int main() {
	
	
	char dna_dizisi[32];
	char byk_harfli_dna_dizi[32];
	char aranacak_dizi[3];
	int i=0;
	int j=0;
	int toplamTekrarSayisi=0;
	
	printf("NOT:BUYUK KUCUK HARF RASTGELE GÝREBÝLÝRSÝNÝZ AMA  TURKCE KARAKTER GIRMEYINIZ !!!!\n\n");
	
	
	printf("DNA dizisini giriniz(32 karakter):");
	scanf("%s",&dna_dizisi);
	
	while(dna_dizisi[31]==NULL){
		printf("eksik karakter girdiniz !!!\n");
		printf("Tekrar Giriniz(32 karakter):");
		scanf("%s",&dna_dizisi);
	}
	
	for(i=0;i<32;i++){
	
	if((int)dna_dizisi[i]>=97 && (int)dna_dizisi[i]<=122 ){
		dna_dizisi[i]=buyukHarfeCevirme((int)dna_dizisi[i]);
	 }
	 else{
	 	dna_dizisi[i]=dna_dizisi[i];
	 }
	
	}
	
	
    
	
	
	
	
	printf("Aranacak diziyi giriniz(3 karakter):");
	scanf("%s",&aranacak_dizi);
	
	while(aranacak_dizi[2]==NULL){
		printf("eksik karakter girdiniz !!!\n");
		printf("Tekrar Giriniz(3 karakter):");
		scanf("%s",&aranacak_dizi);
	}
	
	
	for(i=0;i<3;i++){
	
	if((int)aranacak_dizi[i]>=97 && (int)aranacak_dizi[i]<=122 ){
		aranacak_dizi[i]=buyukHarfeCevirme((int)aranacak_dizi[i]);
	 }
	 else{
	 	aranacak_dizi[i]=aranacak_dizi[i];
	 }
	
	}
	
	
	
	printf("\n");
	i=0;
	
	while(i<32)
	{
		
		if(dna_dizisi[i]==aranacak_dizi[j])
		{
			i++;
			j++;
			
			if(dna_dizisi[i]==aranacak_dizi[j])
			{
				i++;
				j++;
				if(dna_dizisi[i]==aranacak_dizi[j])
				{
					printf("konum: %d \n",i-1);		
					toplamTekrarSayisi++;
				}
				i--;
				j--;
			}
			j--;
			i--;			
		}
		i++;
	}
	
	printf("\nToplam Tekrar Sayisi: %d \n",toplamTekrarSayisi);	
	return 0;
}
