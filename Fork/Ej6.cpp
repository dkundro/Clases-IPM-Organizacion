#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int main ()
{
	//Utilizando dos procesos, hacer que un proceso le envie una letra al otro. Cuando el otro la recibe, le responde con la letra que le sigue en el abecedario. Si se llega a la z, se respondera con la a. Ambos procesos deben repetir este comportamiento en un bucle infinito.
	/*Ej:
	proceso A a B: x
	proceso B a A: y
	proceso A a B: z
	proceso B a A: a
	proceso A a B: b
	... etc
	*/


	return 0;
}

