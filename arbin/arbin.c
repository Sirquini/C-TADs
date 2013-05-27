#include <stdlib.h>

#include "arbin.h"

abElement raizArbin(Arbin a)
{
	return a -> raiz;
}

Arbin izqArbin(Arbin a)
{
	return a -> izq;
}

Arbin derArbin(Arbin a)
{
	return a -> der;
}

int vacioArbin(Arbin a)
{
	return (a == NULL) ? 1 : 0;
}

int pesoArbin(Arbin a)
{
	if (vacioArbin(a))
		return 0;
	else
		return 1 + pesoArbin(izqArbin(a)) + pesoArbin(derArbin(a));
}

int estaArbin(Arbin a, abElement e)
{
	if (vacioArbin(a))
		return 0;
	if (raizArbin(a) == e)
		return 1;
	return estaArbin(izqArbin(a), e) || estaArbin(derArbin(a));
}

int numHojas(Arbin a)
{
	if (vacioArbin(a))
		return 0;
	if (vacioArbin(izqArbin(a)) && vacioArbin(derArbin(a)))
		return 1;
	return numHojas(izqArbin(a)) + numHojas(derArbin(a));
}

int hayCamino(Arbin a, abElement e1, abElement e2)
{
	if(vacioArbin(a))
		return 0;
	if(e1 == raizArbin(a))
		return estaArbin(a, e2);
	return hayCamino(izqArbin(a), e1, e2) || hayCamino(derArbin(a), e1, e2);
}

int contNivel(Arbin a, int n)
{
	if (vacioArbin(a))
		return 0;
	if (n == 0)
		return 1;
	return contNivel(izqArbin(a), n - 1) + contNivel(derArbin(a), n -1);
}

int semejantesArbin(Arbin a1, Arbin a2)
{
	return pesoArbin(a1) == pesoArbin(a2) && incluidoArbin(a1, a2);
}

int incluidoArbin(Arbin a1, Arbin a2)
{
	if(vacioArbin(a1))
		return 1;
	return estaArbin(a2, raizArbin(a1)) &&
		incluidoArbin(izqArbin(a1), a2) &&
		incluidoArbin(derArbin(a1), a2);
}
