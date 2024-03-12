// exemplos de operações de comparação
// a resposta é um teste lógico
#include <stdio.h>
int main()
{
    int A = 1, B = 2, C = 3, D;
    printf(" A < 2: %i\n",A < 2); 
    printf(" B - A < 0: %i\n",B - A < 0);   
    printf(" 2*B - 4*A >= 0: %i\n",2*B - 4*A >= 0);   
    printf(" 3*B == 2*C: %i\n",3*B == 2*C);   
    printf(" C != 1 + A: %i\n",C != 1 + A);
    printf(" 6%3 > 0: %i\n", 6%3 > 0);
    printf(" C%2 <= 1: %i\n",C%2 <= 1);
    D = A > 3;
    printf(" D: %i",D);
    return 0;
}
// fim
//A < 2: Verifica se A é menor que 2.
//B - A < 0: Verifica se a diferença entre B e A é menor que 0.
//2*B - 4*A >= 0: Verifica se o resultado da expressão 2*B - 4*A é maior ou igual a 0.
//3*B == 2*C: Verifica se o produto de 3 e B é igual a 2*C.
//C != 1 + A: Verifica se C é diferente de 1 + A.
//6%3 > 0: Verifica se o resto da divisão de 6 por 3 é maior que 0.
//C%2 <= 1: Verifica se o resto da divisão de C por 2 é menor ou igual a 1.
//a variável D é definida como o resultado da comparação A > 3, que verifica se A é maior que 3.