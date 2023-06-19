//EX 01
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numero = 10;
    float valor = 3.14;
    char caractere = 'A';

    int *ptrNumero = &numero;
    float *ptrValor = &valor;
    char *ptrCaractere = &caractere;

    printf("Valores antes da modificação:\n");
    printf("Inteiro: %d\n", numero);
    printf("Real: %.2f\n", valor);
    printf("Char: %c\n\n", caractere);

    *ptrNumero = 20;
    *ptrValor = 2.71;
    *ptrCaractere = 'B';

    printf("Valores após a modificação:\n");
    printf("Inteiro: %d\n", numero);
    printf("Real: %.2f\n", valor);
    printf("Char: %c\n", caractere);

    return 0;
}
*/

//EX 02
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1;
    int numero2;

    printf("Digite o valor do primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o valor do segundo número: ");
    scanf("%d", &numero2);

    printf("\nEndereço do primeiro número: %p\n", (void*)&numero1);
    printf("Endereço do segundo número: %p\n", (void*)&numero2);

    if (&numero1 > &numero2) {
        printf("\nO primeiro número possui o maior endereço.\n");
    } else if (&numero2 > &numero1) {
        printf("\nO segundo número possui o maior endereço.\n");
    } else {
        printf("\nOs endereços são iguais.\n");
    }

    return 0;
}
*/

//EX 03
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1;
    int numero2;

    printf("Digite o valor do primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o valor do segundo número: ");
    scanf("%d", &numero2);

    printf("\nEndereço do primeiro número: %p\n", (void*)&numero1);
    printf("Endereço do segundo número: %p\n", (void*)&numero2);

    if (&numero1 > &numero2) {
        printf("\nConteúdo do maior endereço: %d\n", numero1);
    } else if (&numero2 > &numero1) {
        printf("\nConteúdo do maior endereço: %d\n", numero2);
    } else {
        printf("\nOs endereços são iguais.\n");
    }

    return 0;
}

int main() {
    int numero1;
    int numero2;

    printf("Digite o valor do primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o valor do segundo número: ");
    scanf("%d", &numero2);

    printf("\nEndereço do primeiro número: %p\n", (void*)&numero1);
    printf("Endereço do segundo número: %p\n", (void*)&numero2);

    if (&numero1 > &numero2) {
        printf("\nConteúdo do maior endereço: %d\n", numero1);
    } else if (&numero2 > &numero1) {
        printf("\nConteúdo do maior endereço: %d\n", numero2);
    } else {
        printf("\nOs endereços são iguais.\n");
    }

    return 0;
}
*/

//EX 04
/*
#include <stdio.h>
#include <stdlib.h>

void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("\nValores antes da troca:\n");
    printf("Número 1: %d\n", numero1);
    printf("Número 2: %d\n", numero2);

    trocarValores(&numero1, &numero2);

    printf("\nValores após a troca:\n");
    printf("Número 1: %d\n", numero1);
    printf("Número 2: %d\n", numero2);

    return 0;
}
*/

//EX 05
/*
#include <stdio.h>
#include <stdlib.h>

void encontrarMaiorMenor(int a, int b, int *maior, int *menor) {
    if (a > b) {
        *maior = a;
        *menor = b;
    } else {
        *maior = b;
        *menor = a;
    }
}

int main() {
    int numero1, numero2;
    int maior, menor;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    encontrarMaiorMenor(numero1, numero2, &maior, &menor);

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
*/