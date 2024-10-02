#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    char prenom[50];
    int age;
} Personne;

int main() {
    Personne personne;

 printf("Entre votre Nom : \n");
 scanf("%s", personne.nom);
    printf("Entre votre Prénom :\n ");
    scanf ("%s",personne.prenom);
    printf("Entre votre Age :\n"); 
   scanf("%d", &personne.age);

    printf("Nom : %s\n", personne.nom);
    printf("Prénom : %s\n", personne.prenom);
    printf("Age : %d ans\n", personne.age);

    return 0;
}