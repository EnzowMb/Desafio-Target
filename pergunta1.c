#include <stdio.h>

int main() {
int indice = 13;
int soma = 0;
int k = 0;

while(k < indice) {
    k++;
    soma+=k;
}

printf("Ao final do processamento, o valor da variavel SOMA eh: %d\n", soma);
return 0;
}
