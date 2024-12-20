#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas

// Função para calcular a área de um quadrado e exibir o resultado
void calcularAreaQuadrado() {
    float lado;

    // Solicita ao usuário o comprimento do lado do quadrado
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

    // Calcula a área usando a função pow() da biblioteca math.h
    float area = pow(lado, 2);

    // Exibe a área do quadrado
    printf("A área do quadrado é: %.2f\n", area);
}


