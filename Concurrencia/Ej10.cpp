#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>
#include <mutex>

using namespace std;

//CONSIGNA: Escribir un codigo en el cual, dados dos threads, ambos realicen las siguientes operaciones (dentro de un ciclo de 100000 iteraciones): 
/*
numero= numero*numero
numero= numero-5*7
numero= numero/4
numero= numero+31
*/ 
//luego de que ambos threads terminen sus correspondientes iteraciones, se debera imprimir el resultado.


int main ()
{
	
	
	return 0;
}



//Para compilar: g++ Ej9.cpp -std=c++11 -lpthread 
