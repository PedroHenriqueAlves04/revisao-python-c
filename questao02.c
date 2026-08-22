#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;

    printf("Digite a primeira nota: \n");
    scanf("%d" , &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    float media = (nota1 + nota2 + nota3) /3;

    printf("(%d + %d + %d) / 3 = %.2f" , nota1 ,nota2,nota3 , media);

    return 0;
}