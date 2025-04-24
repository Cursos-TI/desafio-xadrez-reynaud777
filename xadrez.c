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




int main(){

    printf("**Movimentação de peças de Xadrez**\n\n");

torre (5);
bispo (5);
rainha (8);

int cavalo = 1;

printf("Cavalo: ");

//Mover o cavalo 2 casas para cima e 1 para a direita 
while (cavalo--); //Loop externo
{
    for (int i = 0; i < 2; i++){ //Loop interno
        printf("Cima, ");
    }
        printf("Direita\n");
}

return 0;

}