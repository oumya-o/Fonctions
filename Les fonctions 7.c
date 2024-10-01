#include <stdio.h>

int pair(int N) {
    if (N % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int N;
    printf("Entrez un nombre : ");
    scanf("%d", &N);

    if (pair(N) == 1) {
        printf("%d est pair\n", N);
    } else {
        printf("%d est impair\n", N);
    }

    return 0;
}