#include <stdio.h>

int main(){
    float mediafinal;

    printf("Digite sua media final: \n");
    scanf("%f" , &mediafinal);

    if(mediafinal >= 7){
        printf("APROVADO");
    }
    else if(mediafinal >= 4){
        printf("FINAL");
    }
    else{
        printf("REPROVADO");
    }

    return 0;
} 