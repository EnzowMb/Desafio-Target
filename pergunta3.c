#include <stdio.h>
#include <math.h>

int logica(int num, char alternativa) {
    if(alternativa == 'A') return num + 2;

    if(alternativa == 'B') return num * 2;

    if(alternativa == 'C') return pow(num, 2);

    if(alternativa == 'D') return pow((num + 2), 2);
}

int main() {

    printf("Proximo elemento de a) : 1, 3, 5, 7, %d\n", logica(7, 'A')); /* ultimo valor + 2 */
    printf("Proximo elemento de b) : 2, 4, 8, 16, 32, 64, %d\n", logica(64, 'B')); /* ultimo valor * 2 */
    printf("Proximo elemento de c) : 0, 1, 4, 9, 16, 25, 36, %d\n", logica(7, 'C')); /* 0 ao quadrado = 0, 1 ao quadrado = 1, ... ,7 ao quadrado = ? */
    printf("Proximo elemento de d) : 4, 16, 36, 64, %d\n", logica(8, 'D')); /* 2 ao quadrado = 4, 4 ao quadrado = 16, ... , (8 + 2) ao quadrado = ? */
    printf("Proximo elemento de e) : 1, 1, 2, 3, 5, 8, %d\n", (5 + 8)); /* Sequencia de Fibonacci */
    printf("Proximo elemento de f) : 2,10, 12, 16, 17, 18, 19, %d\n", 200); /* É a sequência de todos os números que começam com a letra D. */

    return 0;
}
