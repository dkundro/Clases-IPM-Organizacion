#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>
#include <mutex>
#include <atomic>
#include <iostream>
#include <fstream>

using namespace std;

//Tamaño de bloque: 128 bits / 16 bytes / 16 chars
//Tamaño de clave: 128 bits / 16 bytes / 16 chars
//Tamaño de clave expandida: 1536 bits / 192 bytes / 192 chars

// Funciones //

void* threadParaCifrado(void* args);
void* threadParaDescifrado(void* args);
void Cipher(char* bloque, char* clave, char* output);
void Decipher(char* bloque, char* clave, char* output);
void expandirClave(char* key, char* extendedKey);
void cargarArchivo (string path, string* secciones, int cantidadSecciones);
void guardarArchivo (string path, string* secciones, int cantidadSecciones);

// Variables globales //

int main ()
{
	//Esta funcion debera pedirle al usuario: la ruta del archivo a cargar, la cantidad de lineas del archivo y la clave. Posteriormente, se debera cargar el contenido del archivo e inicializar todos los threads necesarios para procesarlo. La cantidad de threads a utilizar sera igual a la cantidad de lineas (cada thread procesara una linea del archivo). El usuario podra elegir si quiere cifrar o descifrar el contenido del archivo (en base a esto se deberan crear los threads correspondientes). Finalmente, se esperara a que terminen todos los threads y, una vez finalizados, se guardara el archivo con su contenido ya procesado.

	//Completar

	return 0;
}

void* threadParaCifrado (void *args) 
//Esta funcion sera la encargada de dividir una seccion del texto cargado en bloques e ir cifrandola bloque por bloque. Cada bloque tiene 128 bits (16 bytes). Cuando finalice esta funcion, se debe haber sobreescrito la seccion recibida en texto plano por su correspondiente texto cifrado.
{
	//Completar
}

void* threadParaDescifrado (void *args) 
//Esta funcion sera la encargada de dividir una seccion del texto cifrado cargado en bloques e ir descifrandola bloque por bloque. Cada bloque tiene 128 bits (16 bytes). Cuando finalice esta funcion, se debe haber sobreescrito la seccion recibida en texto cifrado por su correspondiente texto plano.
{
	//Completar
}

void Cipher(char* bloque, char* claveExtendida, char* output) 
//Se encarga de cifrar un unico bloque (array de chars) en base a la clave extendida (array de chars). El resultado se guardara en "output" (array de chars).
{
	//Completar
}

void Decipher(char* bloque, char* claveExtendida, char* output)
//Se encarga de descifrar un unico bloque (array de chars) en base a la clave extendida (array de chars). El resultado se guardara en output (array de chars).
{
	//Completar
}

void expandirClave(char* clave, char* claveExtendida)
//Recibe la clave que ingreso el usuario (128 bits (16 bytes)) y la extiende a 1536 bits (192 bytes). Es decir, claveExtendida tendra "12 claves" de 128 bits (incluida la original). La clave original sera los primeros 128 bits de la clave extendida y el resto se debera formar en base a ella. clave y claveExtendida son arreglos de chars.
{ 
	//Completar
}

void cargarArchivo (string path, string* secciones, int cantidadDeLineas)
//Esta funcion debera cargar cada linea/renglon del archivo que se encuentra en "path" y almacenarlas en su posicion correspondiente del arreglo de strings (por ejemplo, la linea 1 en la posicion 0, la linea 2 en la posicion 1, etc) al que apunta "secciones". La cantidad de lineas del archivo se recibe como parametro. A partir de este punto, cada linea se llamara "seccion".
{
	//Completar
}

void guardarArchivo (string path, string* secciones, int cantidadSecciones)
//Esta funcion debera tomar el contenido de cada uno de los strings contenidos en el arreglo al que apunta "secciones" y guardarlos (uno por linea/renglon y en orden) en el archivo correspondiente a la direccion "path".
{
	//Completar
}


