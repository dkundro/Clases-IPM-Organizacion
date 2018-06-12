#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int main ()
{
	//Utilizando dos procesos, hacer que ambos tengan la siguiente conversacion:
	//Proceso A: "hola proceso B" 
	//Proceso B: "hola proceso A, como estas?" 
	//Proceso A: "bien, usando pipes para hablar con vos" 
	//Proceso A: "vos como estas?"
	//Proceso B: "bien. Chau" 
	//Proceso A: "Chau"
	return 0;
}

