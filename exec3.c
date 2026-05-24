#include <stdio.h>

int main() {
    float consumos[7];
    int horarioPico;
    int c;

    int altoCusto = 0;
    int custoNormal = 0;

    float soma = 0;
    float media;

    for(c = 0; c < 7; c++){
        printf("\nDigite o Valor de Consumo %d: ", c + 1);
        scanf("%f", &consumos[c]);
        printf("Horário de Pico? [1/0]: ");
        scanf("%d", &horarioPico);
        
        if(consumos[c] > 100 && horarioPico == 1){
            printf("CUSTO ALTO!\n");
            altoCusto++;
        }
        else{
            printf("CUSTO NORMAL.\n");
            custoNormal++;
        }
        
        soma = soma + consumos[c];
    }
        media = soma / 7;   
        
    printf("\nEQUIPAMENTOS COM ALTO CUSTO: %d", altoCusto);
    printf("\nEQUIPAMENTOS COM CUSTO NORMAL: %d", custoNormal);
    printf("\nMÉDIA DE CONSUMO: %.2f", media);

    return 0;
}
