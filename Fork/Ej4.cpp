#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int main ()
{
	//Consigna: El proceso principal crea dos procesos hijos:
	//	Productor: Este proceso escribira A, B , C o D aleatoriamente en un pipe
	//		cada 3 segundos (usar spleep(3);). Repetira este comportamiento en 
	//		un bucle infinito (while(true){})
	//	Consumidor: Este proceso estara dentro de un bucle infinito chequeando 
	//		constantemente si el proceso productor escribio algo en el pipe.
	//		Segun la letra que haya escrito el productor, este proceso imprimira algo 
	//		por pantalla. Finalmente, Volvera a esperar una letra en el pipe 

	return 0;
}

