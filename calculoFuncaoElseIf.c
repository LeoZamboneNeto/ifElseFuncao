#include <stdio.h>
#include <math.h>

int main(){

float a, funcao;

printf("Para cada valor escolhido dentre algum intervalo o calculo altera\nEscolha o valor: ");
scanf("%f", &a);

// || operador logico 'OU', != de sequencial ';'
if (a <= 0 || a > 7) {
    printf("Valores inexistentes!!");
}
else if ( a < 2){
    funcao = 3 * a + 11;
    printf(" O resultado da função é igual a: %f", funcao);
}
else if ( a <= 5){
        printf("O resultado da função é: 17 ");
}
else {
    funcao = -4.5 * a + 39.5;
    printf(" O resultado da função é: %f", funcao);
}
return 0;
}
