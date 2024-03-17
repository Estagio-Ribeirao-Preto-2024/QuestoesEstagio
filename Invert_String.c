#include <stdio.h>
#include <string.h>

void inverteString(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;
    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char string[100];
    printf("Insira uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    inverteString(string);
    printf("String invertida: %s\n", string);
    return 0;
}
