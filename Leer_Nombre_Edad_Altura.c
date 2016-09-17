/*
 * HolaMundo.c
 *
 *  Created on: 16/09/2016
 *      Author: jjhdzh
 */
#include<stdio.h>

int main ()
{
char nombre [20];
int edad;
double altura;

printf("Ingresa tu nombre \n");
scanf("%s",nombre);

printf("Ingresa tu edad \n");
scanf("%d",&edad);

printf("Ingresa tu altura \n");
scanf("%lf",&altura);

printf("Usted es %s, tienes %d y una altura de %lf \n",nombre,edad,altura);
return 0;

}
