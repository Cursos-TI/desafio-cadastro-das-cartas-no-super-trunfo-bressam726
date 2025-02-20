#include <stdio.h>


typedef struct {
    char codigo[4];
    char nome[50];
    double populacao;
    double area;
    double pib;
    int pontos_turisticos;
} Cidade;


void exibirCidade(Cidade c) {
    printf("\nCodigo: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nome);
    printf("Populacao: %.2lf\n", c.populacao);
    printf("Area: %.2lf km2\n", c.area);
    printf("PIB: %.2lf bilhoes\n", c.pib);
    printf("Pontos Turisticos: %d\n", c.pontos_turisticos);
}

int main() {
    Cidade cidade;

    
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%3s", cidade.codigo);
    cidade.codigo[3] = '\0'; 

    while (getchar() != '\n'); 

    printf("Digite o nome da cidade: ");
    scanf(" %[^
]", cidade.nome);

    printf("Digite a populacao: ");
    scanf("%lf", &cidade.populacao);
    while (getchar() != '\n'); 

    printf("Digite a area (em km2): ");
    scanf("%lf", &cidade.area);
    while (getchar() != '\n'); 

    printf("Digite o PIB (em bilhoes): ");
    scanf("%lf", &cidade.pib);
    while (getchar() != '\n'); 

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &cidade.pontos_turisticos);
    while (getchar() != '\n');

   
    exibirCidade(cidade);

    return 0;
}
