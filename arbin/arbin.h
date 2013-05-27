#ifndef _ARBIN_H
#define _ARBIN_H

typedef int abElement;

struct _arbin
{
	abElement raiz;
	struct _arbin *izq;
	struct _arbin *der;
};

typedef struct _arbin tArbin, *Arbin;

abElement raizArbin(Arbin);

Arbin izqArbin(Arbin);

Arbin derArbin(Arbin);

int vacioArbin(Arbin);

int pesoArbin(Arbin);

int estaArbin(Arbin, abElement);

int numHojas(Arbin);

int hayCamino(Arbin, abElement, abElement);

int contNivel(Arbin, int);

int semejantesArbin(Arbin, Arbin);

int incluidoArbin(Arbin, Arbin);

#endif