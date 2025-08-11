
#include <stdio.h>
#include <string.h>

int main() {
    char str1[21]; // 20 caracteres + 1 para o caractere nulo
    char str2[21];

    // Pede a primeira string
    printf("Digite a primeira string (máximo 20 caracteres): ");
    fgets(str1, sizeof(str1), stdin);
    // Remove o caractere de nova linha, se presente
    str1[strcspn(str1, "\n")] = '\0';

    // Pede a segunda string
    printf("Digite a segunda string (máximo 20 caracteres): ");
    fgets(str2, sizeof(str2), stdin);
    // Remove o caractere de nova linha, se presente
    str2[strcspn(str2, "\n")] = '\0';

    // Compara as strings
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}