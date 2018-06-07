#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int main ()
{
	//Utilizando dos procesos: hacer que un proceso le envie "hola, estoy escribiendo en un pipe" a otro proceso.
	//El otro proceso deberá leer el mensaje que le enviaron por el pipe e imprimirlo

	return 0;
}

