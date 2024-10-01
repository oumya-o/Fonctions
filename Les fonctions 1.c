#include <stdio.h>

int som(int x, int y) {
  return x + y;
}

int main() {
  int N1, N2, S;

    printf("Entrez 1er nombre :");
    scanf("%d", &N1);
    printf("Entrez 2eme nombre :");
    scanf("%d", &N2);
S = som(N1, N2);

    printf("La som de %d et %d est :%d\n", N1, N2, S);

    return 0;
}