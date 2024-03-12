#include <stdio.h>

int main(){
    int i;

    for(i=1; 1<=10; i++){
        printf("%d", i);

        if(i == 5){
            break;
        }
    }
}

// O resultado eh o mesmo do programa anterios, porem quano o programa encontra o comando continue, ele ignora e nao imprime o valor 5.
//int main(){
//    int i;
//
//    for(i=1; 1<=10; i++){
//        printf("%d", i);
//
//        if(i == 5){
//          continue;
//      }
//  }
//}