#include <stdio.h>

int main(){

int n1, n2;

printf("Escolha um numero:");
scanf("%d", &n1);

printf("Escolha outro numero:");
scanf("%d", &n2);

if (n1>n2) {

    printf("O primeiro numero e maior");

}
else{

    printf("O segundo numero e maior");

}

return 0;
}