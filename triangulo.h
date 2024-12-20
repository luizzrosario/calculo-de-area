#include <stdio.h>


//AREA DO TRIANGULO = A = (b*h)/2

// FUNÇÃO PARA CALCULAR A AREA DO TRIANGULO
float calcularAreaTriangulo(){
    float base, h;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &h);

    float areaTriangulo = (base * h) /2 ;
    printf("area do triangulo: %.2f", areaTriangulo);

}

/*
int main(){
    system("chcp 65001>nul");

    float area;

    area = calcularAreaTriangulo();

    printf("A area do triangulo é %.2f", area);
}
*/