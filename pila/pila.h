/*arcivo .h del TAD pila dinamico*/
#ifndef _PILA_H
#define _PILA_H 
#include <stdio.h>
#include <stdlib.h>
/*declaracion de estructura lifo"last in, frist out"*/
struct lifo
{
	int elm; /*variable que coniene el elmento de tipo entero*/
	struct lifo *nxt; /*nodo que apunta al siguiente en la pila*/
};

typedef struct lifo *pila; 

/*funcion creadora de una pila, retorna una pila vacia*/
pila crearpila();

/*funcion para meter un elemento en una pila(al final), recive una pila
de tamaño N y una variable de tipo elemento; retora la misma pila de tamaño N+1 con el elemento
agregado*/
pila push(pila p,int elm);

/*funcion para elimnar un dato en la pila(el ultimo), recive una pila de tamaño N
y retorna la misma pila de tamaño n-1*/
pila pop(pila p);

/*funcion para saber el valor del elemento en la pila
(en la ultima poscision), le entra una pila y retorna una variable de
tipo elemento con el valor*/
int peek(pila p);

/*funcion que invierte una pila, recive una pila y retrona
la misma pila invertida*/
pila invertir(pila p);

#endif /* _PILA_H */
