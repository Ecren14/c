#include <stdio.h>


int deneme(int);
int main(){
    int x= deneme(5);
    printf("%d",x);


    return 0;
}
int deneme(int sayi){
    printf("sayiniz:%d\n",sayi);
    return 10;
}