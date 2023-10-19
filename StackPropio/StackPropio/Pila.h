#pragma once
#include "Node.h"
using namespace System;

ref class Pila
{
public:
	Node^ start;
	int count;

	Pila() {
		count = 0;
		start = nullptr;

	}

	void PushPila(String^ value); // Cambi� el tipo de dato de int a String
	String^ PopPila(); // Cambi� el tipo de dato de int a String
	String^ PeekPila(); // Cambi� el tipo de dato de int a String
	bool isEmptyPila();

};

