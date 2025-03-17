#include <stdio.h>

int main(){
    printf("Desafio Xadres: Comparação das cartas!\n");

        char estado1 [50], estado2 [50];
        char codestado1 [50], codestado2 [50];
        char cidestado1 [50], cidestado2 [50];
        int habestado1, habestado2;
        float areacidade1, areacidade2;
        float PIBestado1, PIBestado2;
        int turisticos1, turisticos2;

printf("Digite o estado 1: \n");
scanf("%s", &estado1);

printf("Digite o codigo da cidade do estado 1: \n");
scanf("%s", &codestado1);

printf("Digite a cidade do estado 1: \n");
scanf("%s", &cidestado1);

printf("Digite a quantidade de habitantes da cidade 1: \n");
scanf("%s", &habestado1);

printf("Digite a area em km² da cidade 1: \n ");
scanf("%f", &areacidade1);

printf("digite o PIB da cidade 1: \n");
scanf("%f", &PIBestado1);

printf("Digite a quantidade de pontos turisticos da cidade 1: \n");
scanf("%d", &turisticos1);

printf("Digite o segundo estado: \n", &estado2);
scanf("%s", &estado2);

printf("Digite o codigo da cidade 2: \n", codestado2);
scanf("%s", &codestado2);

printf("Digite a cidade do estado 2: \n", cidestado2);
scanf("%s", &cidestado2);

printf("Digite a quantidade de habitantes da cidade 2: \n" , habestado2);
scanf("%s", &habestado2);

printf("Digite o PIB da cidade 2: \n", PIBestado2);
scanf("%f", &PIBestado2);

printf("Digite a quantidade de pontos turisticos da cidade 2: \n", turisticos2);
scanf("%d", &turisticos2);

printf("Comparação das Cartas \n");
    
    if (turisticos1 > turisticos2) {
        printf("Quantidade de pontos turísticos da cidade 1 é maior que cidade 2. \n");
    }else {
        printf("Quantidade de pontos turísticos da cidade 2 é menor que cidade 1. \n");
    }

    if(turisticos1 > turisticos2) {
        printf("Carta 1 venceu! \n");
    
    }
    
    return 0;
}