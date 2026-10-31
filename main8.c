#include <stdio.h>
int main(){
   
  int sharp;
  char symbol;
  printf("enter the number of sharps: ");
  scanf("%d",&sharp);

  printf("enter a symbol: ");
  scanf(" %c", &symbol);
  
  for(int i=1;i<=sharp;i++){
    for(int j=1;j<=i;j++){
        printf("%c",symbol);}
        printf("\n");
       //printf("#");
    }
    for (int i = 1; i <= sharp; i++)
    {
        for (int j =sharp ; j> i; j--)
        {
            printf("%c", symbol);
        }
            printf("\n");
    }

        return 0;}