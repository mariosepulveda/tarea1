#include<stdio.h>
#include"calculadora.h"

int main(void)
{
 int op,a,b,c;

printf("\tcalculadora de enteros\n");
printf("ingrese un numero entero\n");
scanf("%d",&a);
printf("ingrese otro numero entero\n");
scanf("%d",&b);

printf("digite la operacion q desea realizar\n");
print("1-suma, 2-resta, 3-multiplicacion, 4-division\n\t");
scanf("%d",&op);

switch(op)
{
case 1:
      c = suma(a,b);
      printf("\nel resultado de la suma es: %d",c);
      break;

case 2:
      c = resta(a,b);
      printf("\nel resultado de la resta es: %d",c);
      break;

case 3:
      c = multiplicacion(a,b);
      printf("\nel resultado de la multiplicacion es: %d",c);
      break;

case 4:
      c = division(a,b);
      printf("\nel resultado de la division es: %d",c);
      break;
}

return 0;
}
