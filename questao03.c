#include <stdio.h>

int main(){
    float Celsius;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f" , &Celsius);

    float Fahrenheit = (Celsius * 9 / 5) + 32;
    printf("%f = %.2f", Celsius, Fahrenheit);

     return 0;
}