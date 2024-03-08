#include <stdio.h>

void inverterString(char *string) {
    int tamanho = 0, i;

    while(string[tamanho] != '\0') {
        tamanho++;
    }

    for(i = 0; i < tamanho / 2; i++) {
        char temp = string[i];
        string[i] = string[tamanho - i - 1];
        string[tamanho - i - 1] = temp;
    }
}

int main() {

    char string[100];
    printf("Digite uma string para inverter: ");
    scanf("%s", string);
    inverterString(string);
    printf("String invertida: %s\n", string);

    return 0;
}
