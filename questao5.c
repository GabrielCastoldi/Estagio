/*
5) Escreva um programa que inverta os caracteres de um stringinging.


IMPORTANTE:

a) Essa stringinging pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;
*/

#include <stdio.h>

int main()
{
    char string[1000] = {0};
    int i;

    printf("Digite uma string: ");
    scanf("%s", string);

    for (i = 0; string[i] != '\0'; i++);

    printf("String invertida: ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    printf("\n");

    return 0;
}