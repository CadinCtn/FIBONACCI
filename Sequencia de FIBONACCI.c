#include <stdio.h>
#include <stdlib.h>

int x;

int fibonacci(int x)
{
    int cont, a, r = 0, b = 1;

    for (cont = 0; cont < x; cont++)
    {
        a = r;

        r = r + b;

        b = a;
    }

    return r;
}

int main()
{

    printf("Sequencia de Fibonacci\n-------------------\nDigite o numero da posicao do algarismo que deseja conferir:\n");
    scanf("%d", &x);

    printf("O %d° valor de fibonacci é: %d", x, fibonacci(x));

    return 0;
}
