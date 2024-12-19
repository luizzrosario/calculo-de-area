#include <stdio.h>

#define PI 3.14159

void area_circulo(void)
{
    int raio;
    printf("PROGRAMA PARA CALCULAR ÁREA DE UM CÍRCULO\n");
    printf("Insira o raio: ");
    scanf("%d", &raio);

    char arr[3];
    printf("Insira a unidade de medida (cm, m, mm): ");
    scanf("%s", &arr);

    printf("Área: %.2f%s²\n", raio*raio*PI, arr);
    
}