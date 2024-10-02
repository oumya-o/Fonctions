#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 char* Rev(char* str) {
int Taille = strlen(str);
 char* reversed = malloc((Taille + 1) * sizeof(char));
 for (int i = 0; i < Taille; i++) {
    reversed[i] = str[Taille - i - 1];
    }
  reversed[Taille] = '\0';
return reversed;
}
int main() {
  char str[100];
    printf("Entrez une chaîne: ");
    fgets(str, sizeof(str), stdin);
  str[strlen(str) - 1] = '\0'; 
  char* reversed = Rev(str);
    printf("La chaîne inversée est: %s\n", reversed);
    free(reversed);
return 0;
}