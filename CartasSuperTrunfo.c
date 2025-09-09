#include <stdio.h>

int main() {
    //CARTA 01
    char estado='A';
    char codigo[]="A01";
    char nomedacidade[]="Ceará";
    int população=9268836;      //dados de 2025
    float area=148;       //em km²
    float pib=213;      //em bilhões de R$
    int numerosdepontosturisticos=25;

    printf("CARTA 01 \n");
    printf("estado: %c \n", estado);
    printf("codigo: %s \n", codigo);
    printf("nomedacidade: %s \n", nomedacidade);
    printf("população: %d \n", população);
    printf("area: %.3f km² \n", area);
    printf("pib: %.3f bilhões de R$ \n", pib);
    printf("numerosdepontosturisticos: %d \n", numerosdepontosturisticos);

    
    return 0;
}