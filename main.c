#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //float ondalık sayı int tam sayı
    char myLetter='A'; //1 byte
    int myNumber =35;   //4 byte
    float myNumber2=3.14;  //4 byte
    double myNumber3=123.345;   //8 byte

       printf("%c\n", myLetter);
       printf("%d\n",myNumber);
       printf("%f\n",myNumber2);
       printf("%lf\n", myNumber3);

       
    return 0;
}
