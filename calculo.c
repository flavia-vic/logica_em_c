/* este programa calcula 
  o cubo de um número */
#include <stdio.h>
int main()
{
    float a = 0., x = 0.;
    printf("este programa calcula x^3 \n");
    printf("digite x: ");
    scanf("%f",&x);
    //Lê o valor de x digitado pelo usuário.
    a = x*x*x;
    //calcula x 3 vezes e guarda na variavel a
    printf("%f^3 = %f", x, a);
    //Imprime o valor de x e o cubo de x.
    return 0;
    //Indica que o programa foi concluído com sucesso.

}
// fim