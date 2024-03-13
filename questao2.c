/*
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número,
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE:

Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

#include <stdio.h>

int main()
{
    int entradaUsuario = 0;

    printf("Digite um numero: ");
    scanf("%d", &entradaUsuario);

    int termoAnterior = 0;
    int termoAtual = 1;
    int proximoTermo = 0;

    while (proximoTermo <= entradaUsuario)
    {
        if (proximoTermo == entradaUsuario)
        {
            printf("%d esta na sequencia de Fibonacci.\n", entradaUsuario);
            return 0;
        }

        termoAnterior = termoAtual;
        termoAtual = proximoTermo;
        proximoTermo = termoAnterior + termoAtual;
        
    }

    printf("%d nao esta na sequencia de Fibonacci.\n", entradaUsuario);

    return 0;
}