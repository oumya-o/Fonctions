#include <stdio.h>

int multi(int x, int y) {
  return x * y;
}

int main() {
  int N1, N2, M;

    printf("Entrez 1er nombre :");
    scanf("%d", &N1);
    printf("Entrez 2eme nombre :");
    scanf("%d", &N2);
M = multi(N1, N2);

    printf("La multi de %d et %d est :%d\n", N1, N2, M);

    return 0;
}