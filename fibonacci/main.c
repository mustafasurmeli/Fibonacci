#include <stdio.h>

int main() {
    int adim;
    printf("Adim Sayisi seciniz:");
    scanf("%d",&adim);

    int dizi[adim];
    dizi[0]=0;
    dizi[1]=1;
    for (int i = 2; i < adim; ++i) {
        dizi[i]=dizi[i-1]+dizi[i-2];

    }
    for (int i = 0; i < adim; ++i) {
        printf("%d ",dizi[i]);
    }
    return 0;
}
