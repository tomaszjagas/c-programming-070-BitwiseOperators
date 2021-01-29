#include <stdio.h>

int main(void) {
    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0;
    short int w4 = 147;
    short int w5 = 61;
    short int temp = 0;
    short int w6 = 154;

    w3 = w1 & w2;
    printf("AND = %d\n", w3);

    w3 = w4 | w5;
    printf("OR = %d\n", w3);

    w3 = w4 ^ w5;
    printf("XOR = %d\n", w3);

    printf("w1 = %d, w2 = %d\n", w1, w2);
    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;
    printf("w1 = %d, w2 = %d\n", w1, w2);

    w3 = ~(w6);
    printf("ones compliment = %d\n", w3);

    return 0;
}