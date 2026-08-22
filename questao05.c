#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("DIgite o primeiro numero: \n");
    scanf("%d" , &num1);

    printf("digite o segundo numero: \n");
    scanf("%d" , &num2);

    if(num1> num2){
        printf("%d e maior", num1);
    }
    else{
        printf("%d e maior", num2);
    }

    return 0;
}