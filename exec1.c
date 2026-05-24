#include <stdio.h>

int main() {
int quantidades[8];
    int essencial;
    int c;

    int urgente = 0;
    int estoqueOk = 0;

    int menorQuantidade = 99999;

    for(c = 0; c < 8; c++){
        printf("\nDigite a Quantidade em Estoque do Produto %d: ", c + 1);
        scanf("%d", &quantidades[c]);
        printf("O Produto é Essencial? [1/0]: ");
        scanf("%d", &essencial);
        
        if(quantidades[c] < 10 && essencial == 1){
            printf("REPOSIÇÃO URGENTE!\n");
            urgente++;
        }
        else{
            printf("ESTOQUE OK.\n");
            estoqueOk++;
        }
        
        if(menorQuantidade > quantidades[c]){
            menorQuantidade = quantidades[c];
        }
        else{
            
        }
    }
    
    printf("\nREPOSIÇÃO URGENTE: %d", urgente);
    printf("\nESTOQUE OK: %d", estoqueOk);
    printf("\nMenor Quantidade Registrada: %d", menorQuantidade);


    // p | q | p && q
    // V | V | V
    // V | F | F
    // F | V | F
    // F | F | F
    return 0;
}
