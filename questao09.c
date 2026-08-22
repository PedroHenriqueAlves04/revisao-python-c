#include <stdio.h>

int main(){
    int num;

    printf("digite um numero: \n");
    scanf("%d", &num);
  printf("COMECANDO A SOMA\n");
    for(int i = 0;i != num;){
        i++;
        printf("%d\n", i);

    }

    return 0;
}