#include <stdio.h>
int main(){
    
    int number;
    int factorial=1;

    printf("enter a number: ");
    scanf("%d",&number);

    for(int i=1;i<=number;i++){
        factorial=factorial*i;
    
    }
    printf("%d!=%d\n",number,factorial);
    
    
    
    
    
    
    
    
    return 0;
}