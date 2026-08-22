#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Digite o primerio numero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%d" , &num2);

    int soma = num1+num2;
    printf("%d + %d = %d" , num1 , num2, soma);

    return 0;
}