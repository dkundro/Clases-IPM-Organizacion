#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int main ()
{
	//Consigna: El proceso principal debe pedirle al usuario que ingrese un numero.
	//Luego, creara una cantidad de procesos hijos igual al numero ingresado por el usuario
	//Finalmente, esperara a que todos los hijos finalicen y luego finalizara el.
	
	//Cada proceso hijo debera crear un archivo .txt donde escribira en la primera linea
	//su PID y cual es su numero (es decir, si el proceso principal lo creo en 4to lugar 
	//imprimira su PID y un 4)
	//Luego, pedira un numero random (aleatorio) entre 1 y 5000 y escribira esa cantidad de 
	//lineas en el archivo (con cualquier contenido, por ej: "asd").
	//Luego de escribir el archivo, imprime por pantalla "termino" y su PID. Luego finaliza.


	return 0;
}

