#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MinhaBiblioteca.h"
#include "MinhaBiblioteca.c"

void maiorMenor(int *vet, int x, int *menor, int *maior){
    int i;
    *menor = *vet;
    *maior = *vet;
    for(i = 0; i < x; i++){
        printf("%d, " , vet[i]);

        if(*menor > *(vet + i))
            *menor = *(vet + i);
        if(*maior < *(vet + i))
            *maior = *(vet + i);
    }

}

int main()
{

    printf("Qual o tamanho do vetor?");
    scanf("%d", &x); /** caso seja um valor que o usuário terá de colocar**/
    int valor[x];


  int vet[x], i, menor = 99999, maior = 0;




      maiorMenor(vet, x, &menor, &maior);
   printf("\n ");
    printf("Max=%d, Min=%d\n", maior, menor);


    return 0;


}
