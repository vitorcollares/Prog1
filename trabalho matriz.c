#include <stdio.h>

int main() 

{
  int a, b, c; 
  int matrizA[50][50], matrizB[50][50], matrizR[50][50];
    
 
  printf("\nMatriz A (2 linhas | 3 colunas)\n");
  for (a=0; a<2; a++) {
  for(b=0; b<3; b++) {
  printf("Digite um numero para Linha [%d] Coluna [%d]: ", (a+1), (b+1));
  scanf("%d", &matrizA[a][b]);
      }
    }
    printf("\nMatriz B\n");
    for (a=0; a<3; a++) {
      for (b=0; b<2; b++) {
        printf("Digite um numero para Linha [%d] Coluna [%d]: ", (a+1), (b+1));
        scanf("%d", &matrizB[a][b]); 
      }
    }
    for (a=0;a<2; a++) {
      for (b=0; b<2; b++) {
        for (c=0; c<3; c++) {
          matrizR[a][b] = matrizR[a][b] + (matrizA[a][c] * matrizB[c][b]); 
 
        }
      }
    }
    printf("\nMatriz R -\n..................................\n");
    for (a=0; a<2; a++) {
      for (b=0; b<2; b++) {
        printf("%d ", matrizR[a][b]);
      }
      printf("\n");
    }
  return(0);  
}
