#pragma once

#include "Nodo.h"

using namespace System;

ref class Cola
{
public:
	Node^ start;
	int count;
	Node^ rear;
	Cola() {
		count = 0;
		start = nullptr;

	}

	void ColaPushCola(String^ value); // Cambi� el tipo de dato de int a String
	String^ ColaPop(); // Cambi� el tipo de dato de int a String
	String^ ColaPeek(); // Cambi� el tipo de dato de int a String
	bool ColaIsEmpty();

};
