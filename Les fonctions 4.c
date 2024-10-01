#include <stdio.h>

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int N1, N2, Min;

    printf("Entrez le premier nombre : ");
    scanf("%d", &N1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &N2);

    Min = min(N1, N2);

    printf("Le min entre %d et %d est : %d\n", N1, N2, Min);

    return 0;
}