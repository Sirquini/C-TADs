#include "lista.h"

Lista crearLista(void)
{
	Lista l;
	l = NULL;
	return l;
}

Lista anxLista(Lista l, lElement d)
{
	Lista nueva, tmp;

	nueva = (Lista) malloc(sizeof(struct node));

	nueva -> data = d;
	nueva -> sig = NULL;

	if (l == NULL)
	{
		l = nueva;
	}
	else
	{
		tmp = l;

		while(tmp->sig != NULL)
		{
			tmp = tmp -> sig;
		}
		tmp -> sig = nueva;
	}

	return l;
}

Lista insLista(Lista l, lElement d, int pos)
{
	Lista nuevo, tmp, tmp2;
	int i;
	nuevo = (Lista)malloc(sizeof(struct node));
	nuevo -> data = d;
	nuevo -> sig = NULL;
	if (pos == 1)
	{
		nuevo -> sig = l;
		l = nuevo;
	}
	else
	{
		tmp = tmp2 = l;
		for (i = 0; i < pos - 2; ++i)
		{
			tmp = tmp -> sig;
		}
		tmp2 = tmp -> sig;
		tmp -> sig = nuevo;
		nuevo -> sig = tmp2;
	}
	return l;
}

Lista elimLista(Lista l, int pos)
{
	Lista tmp, tmp2;
	int i;

	tmp = tmp2 = l;
	if (pos == 1)
	{
		l = l -> sig;
	}
	else
	{
		for (i = 0; i < pos - 2; ++i)
		{
			tmp = tmp -> sig;
		}
		tmp2 = tmp -> sig;
		tmp -> sig = tmp2 -> sig;
		tmp2 -> sig = NULL;
		free(tmp2);
	}
	return l;
}

lElement infoLista(Lista l, int pos)
{
	Lista tmp;
	int i;
	tmp = l;
	for (i = 1; i < pos; ++i)
	{
		tmp = tmp -> sig;
	}
	return tmp -> data;
}

int longLista(Lista l)
{
	unsigned int i;
	Lista tmp;
	tmp = l;
	for (i = 1; tmp -> sig != NULL ; ++i)
	{
		tmp = tmp -> sig;
	}
	return i;
}

int vaciaLista(Lista l)
{
	return (l == NULL) ? 1 : 0;
}