#include <stdio.h>

void deneme(int yas,char name[]){ //age ve name in parantez içindeki sırası da önemli!
    
    printf("senin adin: %s\n",name);
    printf("senin yasin: %d",yas);
}
int main(){
    
    int age=33;
    
    char name[]= "Ozgur";
   deneme(age,name);
    
    
    return 0;
}