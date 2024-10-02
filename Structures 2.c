#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    char prenom[50];
} Personne;

int main() {
    int n;
    Personne personne;

 printf("Entre votre Nom : \n");
 scanf("%s", personne.nom);
    printf("Entre votre Prénom :\n ");
    scanf ("%s",personne.prenom);
    printf("Entre le nomber des notes :\n"); 
    scanf ("%d",&n);
        int note [n];
printf("entre les note :\n");
    for (int i =0 ; i <n ; i++){
    scanf("%d", &note[i]);
}
    printf("Nom : %s\n", personne.nom);
    printf("Prénom : %s\n", personne.prenom);
    for(int i = 0 ; i<n ; i++){
    printf("Note %d: %d\n", i, note[i]);
}
    return 0;
}