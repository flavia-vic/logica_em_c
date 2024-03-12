#include <stdio.h>
int main()
{
    int num;
    printf(" digite um numero no intervalo [5,30]: ");
    scanf("%i", &num);
    if((num >= 5)&&(num <= 30)){
        if(num%2 == 0){
            printf(" %i eh PAR", num);
        }else{
            printf(" %i eh IMPAR", num);
        }
    }else{
        printf(" %i esta fora do intervalo", num);
    }
    return 0;
}