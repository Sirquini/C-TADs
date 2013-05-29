/*arcivo .c del TAD pila dinamico*/
#include "pila.h" /*importar el archivo .h, ya tiene incluido las 
librerias estandar*/

/*funcion creadora de una pila, retorna una pila vacia*/
pila crearpila(){
	pila p;
	p=NULL;
	return p;
}

/*funcion para meter un elemento en una pila(al final), recive una pila
de tamaño N y una variable de tipo elemento; retora la misma pila de tamaño N+1 con el elemento
agregado*/
pila push(pila p,int elm){
	pila tmp;
	tmp = (pila)malloc(sizeof(struct lifo));
	tmp->elm=elm;
	tmp->nxt=p;
	return tmp;
}

/*funcion para elimnar un dato en la pila(el ultimo), recive una pila de tamaño N
y retorna la misma pila de tamaño n-1*/
pila pop(pila p){
	if (p!=NULL)
	{
		p=p->nxt;
	}
	return p;
}

/*funcion para saber el valor del elemento en la pila
(en la ultima poscision), le entra una pila y retorna una variable de
tipo elemento con el valor*/
int peek(pila p){
	return p->elm;
}

/*funcion que invierte una pila, recive una pila y retrona
la misma pila invertida*/
pila invertir(pila p){
	pila tmp,tmpp;
	tmp=p;
	tmpp=crearpila();
	while(tmp!=NULL){
		tmpp=push(tmp,peek(p));
		tmp=pop(tmp);
	}
	return tmpp;
}