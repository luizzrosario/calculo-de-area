#include <stdio.h>

// Função para calcular a área do trapézio
void calcularAreaTrapezio(void) {
    float baseMaior, baseMenor, altura, area;
    // Entrada de dados
    printf("Digite o valor da base maior: ");
    scanf("%f", &baseMaior);

    printf("Digite o valor da base menor: ");
    scanf("%f", &baseMenor);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    area = ((baseMaior + baseMenor) * altura) / 2;
    printf("A área do trapézio é: %.2f\n", area);
}