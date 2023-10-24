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

	void Push(String^ value); // Cambi� el tipo de dato de int a String
	String^ Pop(); // Cambi� el tipo de dato de int a String
	String^ Peek(); // Cambi� el tipo de dato de int a String
	bool isEmpty();
	void Clear();
	Pila^ Copiar();
	int Count();
	void BubbleSort();
	String^ ElementAt(int index);

};

