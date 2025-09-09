#include <stdio.h>

int main(){
    char estado1[50];
    char estado2[50];
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
    

    printf("Estado: \n");
    scanf("%s", estado1);

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
    printf("Estado: %s\n", estado1);
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
    printf("Estado: \n");
    scanf("%s", estado2);

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
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigoest2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos túristicos: %d\n", pt2);
    printf("Densidade: %.2f\n", dp2);
    printf("PIB per capita: %.2f\n", pp2);
    printf("Super Poder: %.2f\n", superpoder2);

   printf("=-=-=-Duelo das Cartas=-=-=-\n");
   if(populacao1 > populacao2){
    printf("POPULAÇÃO");
    printf("Carta1 - %s\n", estado1);
    printf("Carta2 - %s\n", estado2);
    printf("RESULTADO: Carta1 (%s) Venceu!!!!", estado1);
   }else{
    printf("POPULAÇÃO");
    printf("Carta1 - %s\n", estado1);
    printf("Carta2 - %s\n", estado2);
    printf("RESULTADO: Carta2 (%s) Venceu!!!!", estado2);
   }
}
