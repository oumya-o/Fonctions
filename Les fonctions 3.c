#include <stdio.h>

int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int N1, N2, M;

    printf("Entrez le premier nombre : ");
    scanf("%d", &N1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &N2);

    M = max(N1, N2);

    printf("Le max entre %d et %d est : %d\n", N1, N2, M);

    return 0;
}