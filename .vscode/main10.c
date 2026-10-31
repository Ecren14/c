#include <stdio.h>

int kare_bulma(int sayi){
    int result=sayi*sayi;
    return result;
}


int main(){
    int sayi,secim;
    printf("karesini istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    
    
    int result = kare_bulma(sayi);
    printf("%d\n",result);
    
    kare_bulma(sayi);
    printf("ayni sayinin karesini tekrar al: ");
    scanf("%d",&secim);

    if(secim==1){
        kare_bulma(sayi);
    }

    return 0;
}