#include <stdio.h>

main(){
int a;
float b,c;

printf("Introduzca un numero: ");
scanf("%f",&b);

a=b;
c=b-a;

printf("La parte entera es %d\n",a);
printf("La parte decimal es %.4f\n",c);

return 0;

}

