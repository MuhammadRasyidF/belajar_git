//Nama : M Rasyid F
//Deskripsi : meengubah angka menjadi terbilang, contoh 12 menjadi dua belas

#include <stdio.h>
#include <string.h>

void scan() ;
void terbilang() ;
void print() ;

int main(){
    int num ;
    char *numTerbilang[255];
    //algorithm
    scan(&num) ;
    terbilang(num, numTerbilang) ;
    print(numTerbilang) ;
    return 0 ;
}

void scan(int *num){
    scanf("%d", &(*num)) ;
}

void terbilang(int num, char *numTerbilang){
    char *satuan[] = {"", "satu ", "dua ", "tiga ", "empat ", "lima ", "enam ", "tujuh ", "delapan ", "sembilan ", "sepuluh ", "sebelas "} ;
    char tmp1[255], tmp2[255] ;

    tmp1[0] = 0 ;
    tmp2[0] = 0 ;

    if(num < 12){
        strcpy(tmp1, "") ;
        strcat(tmp1, satuan[num]) ;
    }
    else if(num < 20){
        terbilang(num - 10, tmp1) ;

        strcat(tmp1, "belas ") ;
    }
    else if(num < 100){
        terbilang(num/10, tmp1) ;
        terbilang(num % 10, tmp2) ;

        strcat(tmp1, "puluh ") ;
        strcat(tmp1, tmp2) ;
    }
    else if(num < 200){
        strcpy(tmp1, "seratus ") ;

        terbilang(num-100, tmp2) ;

        strcat(tmp1, tmp2) ;
    }
    else if(num < 1000){
        terbilang(num/100, tmp1) ;
        terbilang(num%100, tmp2) ;

        strcat(tmp1, "ratus ") ;
        strcat(tmp1, tmp2) ;
    }
    else if(num < 2000){
        strcpy(tmp1, "seribu ") ;

        terbilang(num - 1000, tmp2) ;

        strcat(tmp1, tmp2) ;
    }
    else if(num < 1000000){
        terbilang(num/1000, tmp1) ;
        terbilang(num%1000, tmp2) ;
        strcat(tmp1, "ribu ") ;
        strcat(tmp1, tmp2) ;
    }
    else if(num < 1000000000){
        terbilang(num/1000000, tmp1) ;
        terbilang(num%1000000, tmp2) ;

        strcat(tmp1, "juta ") ;
        strcat(tmp1, tmp2) ;
    }
    else if(num < 2100000000){
        terbilang(num/1000000000, tmp1) ;
        terbilang(num%1000000000, tmp2) ;

        strcat(tmp1, "miliyar ") ;
        strcat(tmp1, tmp2) ;
    }
    else{
        strcpy(tmp1, "\0") ;
    }

    strcpy(numTerbilang, tmp1) ;
}

void print(char *numTerbilang){
    int len ; 
    len = strlen(numTerbilang) ;
    numTerbilang[len-1] = 0 ; //menghilangkan spasi diakhir

    printf("%s", numTerbilang) ;
}