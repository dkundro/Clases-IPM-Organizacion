#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>
#include <mutex>

using namespace std;

//CONSIGNA: El usuario ingresa por pantalla un numero cualquiera X. Luego, debera ingresar X numeros. Posteriormente se crearan X threads y, cada uno de ellos, deberá calcular la potencia 10 de su numero correspondiente. 
/*EJ:
Usuario ingresa: 3
Ingresa:
	4
	5
	7
El programa devuelve:
	1048576
	9765625
	282475249
cada uno de esos valores es calculado independientemente por cada thread.*/

int main ()
{
	
	
	return 0;
}



//Para compilar: g++ Ej1.cpp -std=c++11 -lpthread 
