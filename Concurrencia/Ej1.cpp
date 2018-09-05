#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>
#include <mutex>

using namespace std;

//CONSIGNA: compilar este codigo y ejecutarlo muchas veces. *Notar el indeterminismo en el resultado*

void* A (void *args);
void* B (void *args);
void* C (void *args);

int main ()
{
	pthread_t thread1;
	pthread_t thread2;
	pthread_t thread3;

	bool param;
	pthread_create(&thread1, nullptr, A, &param);
	pthread_create(&thread2, nullptr, B, &param);
	pthread_create(&thread3, nullptr, C, &param);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	pthread_join(thread3, NULL);

	return 0;
}

void* A(void *args)
{
	cout<<"A"<<endl;
}

void* B(void *args)
{
	cout<<"B"<<endl;	
}

void* C(void *args)
{
	cout<<"C"<<endl;
}

//Para compilar: g++ Ej1.cpp -std=c++11 -lpthread 
