#include <stdio.h>
#include <stdlib.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
int fibonacci(int n1, int n2){
  for(int i = n1;n1<n2;i++){
    
  }
}

int main(){
  int numero1,numero2;
  scanf("%d %d",&numero1,&numero2);
  int resultado = fibonacci(numero1,numero2);
  printf("Existem %d números de fibonacci entre %d e %d",resultado,numero1,numero2);
  
  return 0;
}