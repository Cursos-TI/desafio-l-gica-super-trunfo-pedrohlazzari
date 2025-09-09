#include <stdio.h>

int main(){
    char pais1[50];
    char pais2[50];
    char codigoest1[20];
    char codigoest2[20];
    char cidade1[50];
    char cidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2; 
    float pib1;
    float pib2;
    int pt1;
    int pt2;
    float dp1, dp2;
    float pp1, pp2;
    float superpoder1, superpoder2;
    int resultado;
    int opcao;
    

    printf("País: \n");
    scanf("%s", pais1);

    printf("Código da carta: \n");
    scanf("%s", codigoest1);

    printf("Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &pt1);

    dp1 = populacao1 / area1;

    pp1 = (float) pib1 / populacao1;

    superpoder1 = (float) populacao1 + area1 + pib1 + pt1 + pp1 + dp1; 

    printf("=-=-=-=-=-=-==-=-=-=-=-\n");
    printf("Carta 01\n");
    printf("Estado: %s\n", pais1);
    printf("Código da carta: %s\n", codigoest1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos túristicos: %d\n", pt1);
    printf("Densidade: %.2f\n", dp1);
    printf("PIB per capita: %.2f\n", pp1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("=-=-=-=-=-=-==-=-=-=-=-\n");
    printf("Carta 02\n");
    printf("País: \n");
    scanf("%s", pais2);

    printf("Código da carta: \n");
    scanf("%s", codigoest2);

    printf("Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &pt2);

    dp2 = populacao2 / area2;

    pp2 = (float) pib2 / populacao2;

    superpoder2 = (float) populacao2 + area2 + pib2 + pt2 + pp2 + dp2; 

    printf("=-=-=-=-=-=-==-=-=-=-=-\n");
    printf("Carta 02\n");
    printf("Estado: %s\n", pais2);
    printf("Código da carta: %s\n", codigoest2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos túristicos: %d\n", pt2);
    printf("Densidade: %.2f\n", dp2);
    printf("PIB per capita: %.2f\n", pp2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("-=-=-=Duelo das Cartas-=-=-=\n");
    printf("ATRIBUTOS\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de otnos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha qual atributo você irá comparar:");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta1 Venceu\n");
        }else if(populacao2 > populacao1)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Venceu\n");
        }else
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Empate\n");
        }
        break;
        case 2:
            if (area1 > area2)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta1 Venceu\n");
        }else if(area2 > area1)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Venceu\n");
        }else
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Empate\n");
    }
    break;
    case 3:
        if (pib1 > pib2)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta1 Venceu\n");
        }else if(pib2 > pib1)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Venceu\n");
        }else
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Empate\n");
    }
    break;
    case 4:
        if (pt1 > pt2)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta1 Venceu\n");
        }else if(pt2 > pt1)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Venceu\n");
        }else
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Empate\n");
    }
    break;
    case 5:
        if (dp1 > dp2)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta1 Venceu\n");
        }else if(dp2 > dp1)
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Venceu\n");
        }else
        {
            printf("Carta1: %s\n", pais1);
            printf("Carta2: %s\n", pais2);
            printf("Carta2 Empate\n");
    }
    break;

}
}
