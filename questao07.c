#include <stdio.h>
int main(){
    int num;
    printf("DIGITE UM NUMERO:\n");
    scanf("%d" , &num);

    if(num % 2 == 0){
        printf("PAR");
    }
    else{
        printf("IMPAR");
    }

    return 0;
}