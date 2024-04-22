#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

main() {
  int vet[TAM], x;
  for(x = 0; x < TAM; x++){
    printf("Digite o %iº número: ", x + 1);
    scanf("%i", &vet[x]);
    vet[x] = vet[x] * 2;
  }
  printf("\nVetor dobrado: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
}