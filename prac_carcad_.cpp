/*NOMBRE: Emmanuel Murillo Picazo
FECHA: 6 de Febrero de 2024
PROGRAMACION ESTRUCTURADA 
programa
prac_carcad. cpp
Universidad de Guadalajara Centro Cualtos
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Usar cadenas y secuencias*/
#include<stdio.h>
int n1,n2,sum,mult,rest,res,opcion;
char name;
void menu(){
printf("mi nombre es: \f "); /*f avanza de pagina*/
scanf ("%s",&name); /* s lee una linea de caracteres*/
printf( "\t selecciona una opcion: \n1.suma \n2.resta \n3.multiplicacion \n"); /* t da un salto de espacio*/
scanf("%d",&opcion); /* d lee un dato numerico entero decimal*/
}
int main () {
do{
menu();
switch(opcion){
case 1:
printf("\r cuales son tus numeros: \n"); /* r regresa */
scanf("%i",&n1); /* i lee un dato entero*/
scanf("%d",&n2);
sum=n1+n2;
printf("la suma es %d\n",sum); /*n da un brinco a otra linea*/
break;
case 2:
printf("cuales son tus numeros \\: \n"); /* diagonal invertida*/
scanf("%d",&n1);
scanf("%f",&n2); /* lee un dato real escrito con punto decimal*/
rest=n1-n2;
printf("la resta es %d\n",rest);
break;
case 3:
printf("cuales son tus numeros\v : \n"); /*v da una tabulacion vertical*/
scanf("%g",&n1); /*lee un dato real*/
scanf("%if",&n2); /*lee un dato loung double*/
mult=n1*n2;
printf("la multiplicacion es %d\n",mult);
break;
}
} while (opcion != 6);
return 0;
}
