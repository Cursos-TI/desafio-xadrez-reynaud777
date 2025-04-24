#include <stdio.h>

//recursividade torre
void torre(int casas){

    if (casas > 0){
    printf("Torre: direita\n");
    torre (casas - 1);
    }

}

//recursividade bispo
void bispo (int casas){
    for (int i = 0; i <= 4; i++){ 
        printf("Bispo: Cima, ");//Loop externo
        for (int j = 4; j <= 4; j++){
            printf("Direita\n"); //Loop interno
        }
     }
     
}

//recursividade rainha
void rainha (int casas){
    if (casas > 0){
        printf("Rainha: Esquerda\n");
        rainha (casas - 1);
    }
}