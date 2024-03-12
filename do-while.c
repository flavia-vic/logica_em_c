#include <stdio.h>

int main(){
    //declaracao da variavel con valor 1
    int i = 1;    
    // Este tipo de loop executa o bloco de código pelo menos uma vez e, em seguida, continua executando enquanto a condição no final for verdadeira.
    do{ 
        //O formato %d é usado para imprimir um valor inteiro.    
        printf("%d", i );
        i++;
    }while(i <=10);

}