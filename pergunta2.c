#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, c;
    while (a <= num) {
        if (a == num)
            return 1;
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero))
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    else
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);

    return 0;
}
