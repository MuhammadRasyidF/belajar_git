#include <stdio.h>

int main(){
	//deklarasi
	int arr[2][5]; //2 baris = kebawah, 5 kolom = kesamping 
	int baris, kolom ;
	int angka;
	
	//algoritma
	scanf("%d", &angka);
	
	for(baris=0 ; baris<2 ; baris++){
		for(kolom=0 ; kolom<5 ; kolom++){
			if(angka%2==0){
				printf("  ") ;
			}
			else {
				printf("%d ", angka) ;
			}
			angka++ ;
		}
		printf("\n") ;
	}
	
	return 0 ;
}
