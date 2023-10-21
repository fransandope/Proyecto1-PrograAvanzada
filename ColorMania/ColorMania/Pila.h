#pragma once
#include "Nodo.h"
ref class Pila
{
public:
	Node^ start;
	int count;

	Pila() {
		count = 0;
		start = nullptr;

	}

	void PilaPush(String^ value); // Cambié el tipo de dato de int a String
	String^ PilaPop(); // Cambié el tipo de dato de int a String
	String^ PilaPeek(); // Cambié el tipo de dato de int a String
	bool PilaIsEmpty();

};