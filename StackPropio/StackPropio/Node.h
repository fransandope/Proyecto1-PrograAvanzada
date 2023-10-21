#pragma once
using namespace System;

ref class Node
{
public:
	Node(String^ dato) {
		this->dato = dato;
		next = nullptr;
		previus = nullptr;
	}

	String^ dato;
	Node^ next;
	Node^ previus;
};




		

