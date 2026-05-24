#include <stdio.h>

int main() {
    int idades[10];
    int convite;
    int c;

    int permitidas = 0;
    int negadas = 0;

    int maiorIdade = 0;

    for(c = 0; c < 10; c++){
        printf("\nDigite a Idade da Pessoa %d: ", c + 1);
        scanf("%d", &idades[c]);
        printf("Possui Convite? [1/0]: ");
        scanf("%d", &convite);
        
        if(idades[c] >= 18 || convite == 1){
            printf("ENTRADA PERMITIDA.\n");
            permitidas++;
        }
        else{
            printf("ENTRADA NEGADA!\n");
            negadas++;
        }
        if(idades[c] > maiorIdade){
            maiorIdade + idades[c];
        }
        else{
            
        }
   }
    
    printf("\nEntradas Permitidas: %d", permitidas);
    printf("\nEntradas Negadas: %d", negadas);
    printf("\nMaior Idade Registrada: %d", maiorIdade);

    return 0;
}
