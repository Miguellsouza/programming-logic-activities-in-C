#include <stdio.h>

int main (void){

float n1, i = 0.0;

printf("Digite qualquer numero e eu te darei todos os numeros reais do 0 ate ele");
scanf("%f", &n1);

while (i <= n1){
    printf("%.5f\n", i);
    i+= 0.00001;

}


return 0;
}