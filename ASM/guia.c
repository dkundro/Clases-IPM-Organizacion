#include <stdio.h>

extern int suma(int a, int b); //devuelve la suma de dos numeros
extern int resta(int a, int b); //devuelve la resta de dos numeros
extern int iguales(int a, int b); //devuelve 1 si los dos numeros son iguales
extern int mayor(int a, int b); //devuelve el mayor de dos numeros
extern int menor(int a, int b); //devuelve el menor de dos numeros
extern int menorOIguales(int a, int b); //si son diferentes, devuelve el menor de dos numeros, si son iguales devuelve 1
extern int sumaNumerosDeAaB(int a, int b); //suma todos los numeros entre a y b
extern int IesimoFibonacci(int i); //devuelve el iesimo numero de la sucesion de fibonacci
extern char aMayuscula(char a); //recibe una minuscula y la devuelve mayuscula

int main() {
	/*
	printf("%i\n", suma(2,5));
	printf("%i\n", resta(2,5));
	printf("%i\n", iguales(2,5));
	printf("%i\n", iguales(2,2));
	printf("%i\n", mayor(2,5));
	printf("%i\n", menor(2,5));
	printf("%i\n", menorOIguales(2,5));
	printf("%i\n", menorOIguales(2,2));
	printf("%i\n", sumaNumerosDeAaB(12,25));
	printf("%i\n", IesimoFibonacci(5));
	printf("%c\n", aMayuscula('b'));
	*/
   	return 0;
}

//Para compilar...
//nasm -f elf64 funciones.asm -o funciones.o
//gcc -c -m64 guia.c -o guia.o
//gcc -o ejec -m64 guia.o funciones.o
