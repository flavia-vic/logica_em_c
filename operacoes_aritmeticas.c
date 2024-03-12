// exemplos de operações aritméticas
#include <stdio.h>
int main()
{
    int A = 1, B = 2, C = 3;

    printf(" A + 2: %i\n",A+2);
    //soma o valor de A + 2 = 1+2 = 3
    printf(" B - 1: %i\n",B - 1);
    //subtrai 2 - 1 = 1
    printf(" 3*A - 2: %i\n",3*A - 2);
    //multiplica 3 * 1 - 2 = 1
    printf(" A/(-2): %i\n",A/(-2));
    // divide p valor de 1 por -2 = 0
    printf(" A/(-2): %f\n",A/(-2.));
    // divide o valor de A por -2 com ponto flutuante
    printf(" 6 % 3: %d\n",6%3);
    // calcula o resto da divisao de 6 por 3
    printf(" C % 2: %d\n",C%2);
    //calcula o resto da divisao de 3 por 2
    return 0;
}
// fim
//Observe que a divisão de inteiros (A / (-2)) resulta em um quociente inteiro, enquanto a divisão de A por um número de ponto flutuante (A / (-2.0)) resulta em um número de ponto flutuante. O operador % calcula o resto da divisão.