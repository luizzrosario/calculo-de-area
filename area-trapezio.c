#include <stdio.h>

// Função para calcular a área do trapézio
float calcularAreaTrapezio() {
    float baseMaior, baseMenor, altura;
    // Entrada de dados
    printf("Digite o valor da base maior: ");
    scanf("%f", &baseMaior);

    printf("Digite o valor da base menor: ");
    scanf("%f", &baseMenor);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    return ((baseMaior + baseMenor) * altura) / 2;
}

int main() {
    float area;
    // Chamada da função para calcular a área
    area = calcularAreaTrapezio();

    // Exibição do resultado
    printf("A área do trapézio é: %.2f\n", area);

    return 0;
}