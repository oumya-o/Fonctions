#include <stdio.h>

int fac(int x ) {
 if (x < 0){
     printf ("Entre un nomber positif\n");
     return -1;
  }else if (x == 0 || x==1){
    
      return 1;
  }else{
      return x * fac(x-1);
      }
  }


int main() {
    int N1;

    printf("Entrez un nombre : ");
    scanf("%d", &N1);
    

    int F = fac(N1);
if (F!=-1){
    printf("Le facterialle  de %d est : %d\n", N1, F);
}
    return 0;
}