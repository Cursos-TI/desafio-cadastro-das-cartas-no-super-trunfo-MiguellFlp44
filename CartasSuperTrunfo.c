#include <stdio.h>
int main(){
    //declaração de variaveis para carta 1
char estado1;
char codigo1[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

//declaração de variaveis para carta 2 

char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

//instruçoes para o usuario

printf("==cadastro da carta 1==\n");
printf("informe o estado (A a H):");
scanf("%c", &estado1);

printf("informe o codigo (ex: A01):");
scanf("%f", &codigo1);

printf("informe a cidade:\n");
scanf("%s", &nomeCidade1);

printf("informe a população:");
scanf("%d", &populacao1);

printf("informe a Área em Km:");
scanf("%f", &area1);

printf("informe o PIB:\n");
scanf("%f", &pib1);

printf("Informe os Pontos Turisticos:");
scanf("%d", &pontosturisticos1);

printf("\n==cadastro da carta 2==\n");
printf("informe o estado (A a H):");
scanf("%c", &estado2);

printf("informe o codigo (ex: A01):");
scanf("%f", &codigo2);

printf("informe a cidade:\n");
scanf("%s", &nomeCidade2);

printf("informe a população:");
scanf("%d", &populacao2);

printf("informe a Área em Km:");
scanf("%f", &area2);

printf("informe o PIB:\n");
scanf("%f", &pib2);

printf("Informe os Pontos Turisticos:");
scanf("%d", &pontosturisticos2);

return 0

}