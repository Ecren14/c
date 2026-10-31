#include <stdio.h>
int main(){
    
    int i,number,number2;
    number=0;
    number2=0;
    i=1;

    printf("lutfen 1  ila 10 arasinda bir sayi giriniz: ");
    scanf("%d",&number);
    printf("Carpim tablosu kaca kadar gitsin: ");
    scanf("%d",&number2);

    if(number<1 || number>10 ){
        printf("yanlis sayi girdiniz! Hata!");
        return 0;
    }
    while(i<=number2){
        printf("%dx%d=%d\n",number,i,number*i);
        i++;
    }


    
    
    
    
    
    
    
    return 0;
}