#include <stdio.h>
int main()
{
    int idade;
    char gen;
    printf(" digite idade e genero[F/M]: ");
    scanf("%i %c", &idade, &gen);
    if(gen == 'M'){
        if(idade <= 12){ printf(" infantil masculino - 15");}
        else if((idade > 12)&&(idade <= 60)){ printf(" adulto masculino - 19");}
        else{ printf(" master masculino - 10"); }
    }else{
        if(idade <= 12){ printf(" infantil feminino - 10");}
        else if((idade > 12)&&(idade <= 60)){ printf(" adulto feminino - 22");}
        else { printf(" master feminino - 9"); }
    }
    return 0;
}
// fim