// calcula media com laço
#include <stdio.h>
int main()
{
    float nota1 = 0., nota2 = 0., med = 0.;
    char resp = 's';
    while(resp == 's' || resp == 'S'){
        printf("\n digite as notas: ");
        scanf("%f %f", &nota1, &nota2);
        med = (nota1 + nota2)/2;
        if(med >= 7) {printf(" aprovado");}
        if(med >= 5 && med < 7) {printf(" exame final");}
        if(med < 5) {printf(" reprovado");}
        printf("\n deseja calcular outra media [s/n]?: ");
        scanf(" %c", &resp);
    }
    return 0;
}
//fim