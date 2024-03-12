// contador 
#include <stdio.h>
int main()
{
    int x, i = 0;
    printf("digite numero: ");
    scanf("%i", &x);
    while(i<=x){
        printf("i = %i\n", i);
        i = i + 1;
    }
    return 0;
}