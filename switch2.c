//Este programa le um numero de 1 a 7 e o associa ao dia da semana

int main(){
    //declaracao de variavel do tipo int
    int d;
    //imrpime na tela
    printf("Insira um valor de 1 a 7: \n");
    //guarda o valor digitado dentro da variavel d
    scanf("%d", &d);

    switch (d){
        case 1:
            printf("Domingo. \n");
            break;
        case 2:
            printf("Segunda-Feira. \n");
            break;
        case 3:
            printf("Terca-Feira. \n");
            break;
        case 4:
            printf("Quarta-Feira. \n");
            break;
        case 5:
            printf("Quinta-Feira. \n");
            break;
        case 6:
            printf("Sexta-Feira. \n");
            break;
        case 7:
            printf("Sabado. \n");
            break;
        default:
            printf("Valor Invalido");
            break;
    }


}