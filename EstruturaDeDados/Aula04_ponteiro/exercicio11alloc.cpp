#include<stdio.h>
#include<math.h>

int main()
{
float A, B, C;

printf("Informe Lado1 : ");
scanf("%f",&A);
printf("Informe Lado2 : ");
scanf("%f",&B);
printf("Informe Lado3 : ");
scanf("%f",&C);

if (C > A + B || A > B + C || B > A + C ){
printf("NAO FORMAM UM TRIANGULO\n");
}

else if ( A != B && A != C && B != C ){
printf("TRIANGULO ESCALENO\n");
}

else if ( A == B && A == C){
printf("TRIANGULO EQUILATERO\n");
}

else if (A == B || A == C || B == C){
printf("TRIANGULO ISOSCELES\n");
}

return 0;
}
