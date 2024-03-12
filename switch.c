#include <stdio.h>
int main()
{
    float a, b;
    char operacao;
    printf("digite operacao e dois numeros: ");
    scanf(" %c %f %f", &operacao, &a, &b);
    switch(operacao){
        case ('+'):
            printf("a + b = %.2f", a+b); 
            break;
        case ('-'):
            printf("a - b = %.2f", a-b); 
            break;
        case ('*'):
            printf("a * b = %.2f", a*b); 
            break;
        case ('/'):
            printf("a / b = %.2f", a/b); 
            break;
        default:
            printf("operacao invalida");
    }
    return 0;
}