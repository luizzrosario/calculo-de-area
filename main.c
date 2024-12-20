#include <stdio.h>
#include <stdlib.h>
#include "calcularArea.h"

int main(int argc, char const *argv[])
{
    int escolha;

    printf("Escolha qual área você quer calcular:\n");
    printf("1 - Circulo\n");
    printf("2 - Quadrado\n");
    printf("3 - Triangulo\n");
    printf("4 - Retangulo\n");
    printf("5 - Trapezio\n");
    printf("Digite o número da opção: ");
    scanf("%d", &escolha);
    return 0;

    switch (escolha)
    {
    case 1:
        area_circulo();
        break;
    case 2:
        calcularAreaQuadrado();
        break;
    case 3:
        calcularAreaTriangulo();
        break;
    case 4:
        FuncaoRetangulo();
        break; 
    case 5: 
        calcularAreaTrapezio();
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
}
