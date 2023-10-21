#pragma once
<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
#include "Node.h"

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

	void PushCola(String^ value); // Cambié el tipo de dato de int a String
	String^ PopCola(); // Cambié el tipo de dato de int a String
	String^ PeekCola(); // Cambié el tipo de dato de int a String
	bool isEmptyCola();

};