#include <stdio.h>

int main() {
    //CARTA 01
    //Variáveis sem atribuíção de valores
    char estado1;
    char codigo1[10];
    char nomedacidade1[50];
    int população1;
    float area1;
    float pib1;
    int numerosdepontosturisticos1;

    //CARTA 02
    char estado2;
    char codigo2[10];
    char nomedacidade2[50];
    int população2; 
    float area2;
    float pib2;
    int numerosdepontosturisticos2;

    //Entrada de dados da CARTA 01

    printf("Insira os dados da CARTA 01 \n");
    
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código:");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:");
    scanf("%s", &nomedacidade1);

    printf("Digite a população:");
    scanf("%d", &população1);

    printf("Digite a área (em km²):");
    scanf("%f", &area1);
    
    printf("Digite o pib (em bilhões de R$):");
    scanf("%f", &pib1); 

    printf("Digite o números de pontos turísticos:");
    scanf("%d", &numerosdepontosturisticos1);   

    printf("\n");

    //Entrada de dados da CARTA 02

    printf("Insira os dados da CARTA 02 \n");

    printf("Digite a letra do estado:");
    scanf(" %c", &estado2);

    printf("Digite o código:");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:");
    scanf("%s", &nomedacidade2);

    printf("Digite a população:");
    scanf("%d", &população2);

    printf("Digite a área (em km²)");
    scanf("%f", &area2);

    printf("Digite o pib (em bilhões de R$):");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos");
    scanf("%d", &numerosdepontosturisticos2);

    return 0;
}