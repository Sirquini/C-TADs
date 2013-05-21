#include <stdio.h>
#include <stdlib.h>

typedef int lElement;

struct node
{
	lElement data;
	struct node* sig;
};

typedef struct node* Lista;

Lista crearLista(void);

Lista anxLista(Lista, lElement);

Lista insLista(Lista, lElement, int);

Lista elimLista(Lista, int);

lElement infoLista(Lista, int);

int longLista(Lista);

int vaciaLista(Lista);