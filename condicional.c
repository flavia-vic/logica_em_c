/*  calcula a média da nota e imprime
o status do aluno */
#include <stdio.h>
int main()
{
    float nota1 = 0., nota2 = 0., med = 0.;
    printf("digite as notas: ");
    scanf("%f %f", &nota1, &nota2);
    med = (nota1 + nota2)/2;
    if(med >= 7.){
        printf("nota %.2f - aluno aprovado",med);
    }
    else if(med < 7. && med >= 5.){
        printf("nota %.2f - aluno fara prova final",med);
    }
    else{
        printf("nota %.2f - aluno reprovado",med);    
    }
    return 0;
}