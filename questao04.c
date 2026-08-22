#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: \n");
    scanf("%d" , &num);

    if(num % 2 == 0){
        printf("%d e PAR\n" , num);
    }
    else{
        printf("%d e IMPAR\n" , num);
    }

    return 0;
}