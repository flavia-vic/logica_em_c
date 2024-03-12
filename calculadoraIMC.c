#include <stdio.h>

int main() {
    // Declaração de variáveis
    float altura, peso, imc;

    // Solicita ao usuário a entrada de altura e peso
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o peso em quilogramas: ");
    scanf("%f", &peso);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o resultado
    //%.2f significa que queremos o resultado com duas casa decimais
    printf("Seu IMC é: %.2f\n", imc);

    // Classificação do IMC
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc < 24.9) {
        printf("Classificação: Peso normal\n");
    } else if (imc < 29.9) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc < 34.9) {
        printf("Classificação: Obesidade Grau I\n");
    } else if (imc < 39.9) {
        printf("Classificação: Obesidade Grau II\n");
    } else {
        printf("Classificação: Obesidade Grau III\n");
    }

    return 0;
}
