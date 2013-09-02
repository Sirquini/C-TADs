#ifndef _LISTA_H
#define _LISTA_H

typedef int lElement;

struct node
{
	lElement data;
	struct node* sig;
};

typedef struct node* Lista;

/**
 * Crea una nueva Lista NULL.
 */
Lista crearLista(void);

/**
 * Anexa un lElement al final de Lista.
 * Retorna la nueva Lista.
 */
Lista anxLista(Lista, lElement);

/**
 * Inserta un lElement en la posicion int de
 * Lista.
 * Retorna la nueva lista.
 */
Lista insLista(Lista, lElement, int);

/**
 * Elimina la posicion int de la Lista.
 * Retorna la nueva lista, NULL si esta vacia.
 */
Lista elimLista(Lista, int);

/**
 * Retorna el lElement en la posicion int de
 * Lista.
 */
lElement infoLista(Lista, int);

/**
 * Retorna el numero de elementos de Lista.
 */
int longLista(Lista);

/**
 * Retorna si Lista esta vacia (1) o no (0).
 */
int vaciaLista(Lista);

/**
 * Destruye toda la lista,
 * liberando toda la memoria reservada.
 */
void destruirLista(Lista);

#endif /* _LISTA_H */
