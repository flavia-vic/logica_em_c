// condicional
#include <stdio.h>
int main() {
    float vel = 0.;
    printf(" digite velocidade: ");
    scanf("%f", &vel);
    if(vel > 60.){
      printf(" acima da velocidade limite!\n");  
    }
    printf(" velocidade: %.2f km/h \n", vel);
    return 0;
}
// fim