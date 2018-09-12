#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>
#include <mutex>

using namespace std;

//CONSIGNA: Se debera crear dos threads. Cada uno de ellos debera sumar uno a un contador (que compartiran ambos threads) e imprimir el resultado de la suma por pantalla dentro un ciclo de 100000 iteraciones. Se debera esperar a que terminen ambos threads y luego se imprimira por pantalla el valor de la variable. *notar el indeterminismo en el resultado*

int main ()
{
	
	
	return 0;
}



//Para compilar: g++ Ej6.cpp -std=c++11 -lpthread 
