// expressoes lógicas com operadores E e OU
// E == &&
// OU == ||

#include <stdio.h>
int main() {
    int A = 1, B = 2, C = 3, D;
    printf(" (A > 1) e (B <= 2): %i\n", (A > 1)&&(B <= 2));
    printf(" (A >= 1) e (B <= 2): %i\n\n", (A >= 1)&&(B <= 2));
    printf(" (A > 1) ou (B <= 2): %i\n", (A > 1)||(B <= 2));
    printf(" (A >= 1) ou (B <= 2): %i\n\n", (A >= 1)||(B <= 2));
    D = (C < B)&&(B == 2*A);
    printf(" D: %i\n", D);
    D = !D;
    printf(" D: %i\n", D);
    return 0;
}