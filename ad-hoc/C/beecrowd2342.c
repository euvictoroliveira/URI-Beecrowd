#include <stdio.h>

int main(void){
    int n, a, b, resultado;
    char operacao;

    scanf("%d %d %c %d", &n, &a, &operacao, &b);

    if(operacao == '+')
        resultado = a + b;
    else
        resultado = a * b;


    if(resultado > n)
        printf("OVERFLOW\n");
    else
        printf("OK\n");

    return 0;

}