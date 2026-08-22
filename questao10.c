#include <stdio.h>

int main(){
    int i;
    for(i = 0; i< 5;){
    int num;
    
    printf("Digite seu  numero: \n");
    scanf("%d" , &num);

    if(num > 0){
        i++;
    }
    else{
        printf("%d Numero negativo\n" , num);
        break;
    }
    
    }

    printf("A quantidade de positivos foram: %d\n" , i);

    return 0;
}