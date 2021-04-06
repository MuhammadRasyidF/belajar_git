//Nama : M Rasyid F
//Deskripsi : menghitung banyak acara pemilihan delegasi HIKAKOM untuk gemastik

#include <stdio.h>

void scan() ;
int combination(int n, int r) ;
void print(int many_ways) ;

int main(){
    int mhs, delegasi ;
    //algorithm
    scan(&mhs, &delegasi) ;
    print(combination(mhs, delegasi)) ;
    return 0 ;
}

void scan(int *n, int *r){
    scanf("%d %d", &(*n), &(*r)) ;
}

int combination(int n, int r){
    //using combination theorythm --> C(n, r) = n!/r!(n-r)!
    // n = jumlah mhs
    // r = kandidat
    int a = 1, b = 1, c = 1, C, d, e, i ;
    int res ;
    d = n ;
    e = r ;
    C = d-e ;
    for (i = n ; i>0 ; i--){
        a *= n;
        n -= 1 ;
    }
    for (i = r ; i>0 ; i--){
        b *= r ;
        r -= 1 ;
    }
    for (i = C ; i>0 ; i--){
        c *= C ;
        C -= 1 ;
    }

    res = a/(b*c) ;
    return res;
}

void print(int many_ways){
    printf("%d", many_ways) ;
}