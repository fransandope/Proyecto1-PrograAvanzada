#pragma once
#include "Node.h"
using namespace System;

ref class Cola
{
public:
	Node^ start;
	int count;
	Node^ last;

	Cola() {
		count = 0;
		start = nullptr;
		last = nullptr;
	}

	void Push(String^ value); // Cambié el tipo de dato de int a String
	String^ Pop(); // Cambié el tipo de dato de int a String
	String^ Peek(); // Cambié el tipo de dato de int a String
	bool isEmpty();
	void Clear();
	Cola^ Copiar();
	int Count();
	void BubbleSort();
	String^ ElementAt(int index);

};