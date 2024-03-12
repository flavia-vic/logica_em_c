// imprime divisores otimizado
#include <stdio.h>
int main()
{
    int x, i = 1;
    printf(" digite um numero inteiro: ");
    scanf("%i", &x);
    while(i <= x/2){
        if(x%i == 0){
            printf("\n %i eh divisor de %i",i,x); 
        }
        i = i + 1;
    }
    if(x > 0){printf("\n %i eh divisor de %i",x,x);}
    return 0;
}
//fim