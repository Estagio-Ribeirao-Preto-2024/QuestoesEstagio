#include <stdio.h>

int verificaFibonacci(int n) {
    int a = 0, b = 1, c, i;
    
    if (n == 0 || n == 1){
        return 1;        
    }

    for (i = 2; i < n+1; i++) {
        c = a + b;
        if(c==n){
            return 1;
        }
        a = b;
        b = c;
    }
    
    return 0;
}

int main() {
    int numero;
    printf("Insira um numero: ");
    scanf("%d", &numero);
    if (verificaFibonacci(numero))
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    else
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);

    return 0;
}
