#include <stdio.h>

int main(void) {
  
  int mo [5] [5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

printf("MATRIZ ORIGINAL\n");

  for (int l=0; l<5; l++){
    for(int c=0; c<5; c++){
      printf("%i ", mo [l][c]);
    }
    printf("\n");
  }
  
  printf("MATRIZ TRANSPOSTA\n");
  int mt [5] [5] = {0};
  for (int a=0; a<5; a++){
    for (int b=0; b<5;b++){
      mt[b][a] = mo[a][b];
    }
  }

for (int l=0; l<5; l++){
    for(int c=0; c<5; c++){
      printf("%i ", mt [l][c]);
    }
    printf("\n");
  }
  
  
  }