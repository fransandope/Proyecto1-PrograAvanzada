#pragma once
#include "Cola.h"
#include "Pila.h"
#include "Node.h"
#include "procedimientos.h"

bool Check_Ganador(int cantidadFilas, int columna, Pila^ pila) {
	Pila^ temp = gcnew Pila();

	while (pila->count > 0) {
		temp->Push(pila->Pop());
	}
	int contador = 0;
	String^ check = " ";
	int index = cantidadFilas - 1;//0-3
	while (temp->count > 0) {

		pila->Push(temp->Pop());

		if ((check == pila->Peek()) || (" " == pila->Peek())) {
			contador++;
		}
		else {
			contador = 1;
			check = pila->Peek();
		}



	}
	if (contador = columna) { return true; }
	else {
		return false;
	}
}
