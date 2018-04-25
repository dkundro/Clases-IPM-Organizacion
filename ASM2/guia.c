#include <stdio.h>

extern int sumaSalteada(int a, int b); 
//devuelve la suma de todos los numeros entre a y b de la siguiente manera:
//ej: sumaRaraEntreAyB(2,8) = 2 + 4 + 6 + 8  
//ej: sumaRaraEntreAyB(3,8) = 3 + 5 + 7 
//es decir, suma salteando 1 numero

extern int sumaRaraEntreAyB(int a, int b); 
//devuelve la suma de todos los numeros entre a y b de la siguiente manera:
//ej: sumaRaraEntreAyB(2,8) = (2+1) + (3+2) + (4+3) + (5+1) + (6+2) + (7+3) + (8+1)
//es decir, a cada numero entre a y b le suma 1, 2, o 3 segun el avance de la secuencia

extern int sumaRaraEntreAyB2(int a, int b); 
//devuelve la suma los numeros entre a y b de la siguiente manera:
//ej: sumaRaraEntreAyB(2,8) = (1+2+3) + (2+3+4) + (3+4+5) + (4+5+6) + (5+6+7) + (6+7+8) + (7+8+9)
//es decir, sumo el numero, su anterior y el siguiente en cada iteracion 

int main() {
	
	printf("%i\n", sumaSalteada(2, 8));
	printf("%i\n", sumaRaraEntreAyB(2, 8));
	printf("%i\n", sumaRaraEntreAyB2(2, 8));
	
   	return 0;
}

//Para compilar...
//nasm -f elf64 funciones.asm -o funciones.o
//gcc -c -m64 guia.c -o guia.o
//gcc -o ejec -m64 guia.o funciones.o
