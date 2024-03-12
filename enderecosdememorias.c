// imprimindo endereço de memória e conteúdo
// de variáveis
#include <stdio.h>
int main()
{
    int A = 4, B = -2;
    B = A + 2;
    printf("\n endereço de A: %i",&A);    //endereco A
    printf("   conteudo de A: %i",A);
    printf("\n endereço de B: %i",&B);    //endereco B
    printf("   conteudo de B: %i",B);
    return 0;
}
// fim
//Note que os endereços de memória são impressos como inteiros, mas na prática, eles são normalmente representados em hexadecimal.
