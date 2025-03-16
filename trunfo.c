#include <stdio.h>
#include <string.h>


typedef struct {
    char estado;           
    char codigo[5];        
    char cidade[100];      
    int populacao;         
    float area;            
    float pib;             
    int pontosTuristicos;  
} Carta;


void lerCarta(Carta *carta) {
    printf("\nDigite o estado (letra de 'A' a 'H'): ");
    scanf(" %c", &carta->estado);  
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", carta->codigo);  
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", carta->cidade);  
    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);  
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &carta->area);  
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);  
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);  
}

void exibirCarta(Carta carta) {
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    printf("Digite os dados da primeira carta:\n");
    lerCarta(&carta1);

    printf("\nDigite os dados da segunda carta:\n");
    lerCarta(&carta2);

    
    printf("\n--- Primeira Carta ---\n");
    exibirCarta(carta1);

    printf("\n--- Segunda Carta ---\n");
    exibirCarta(carta2);

    return 0;
}
